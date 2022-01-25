#include <iostream>
#include <emscripten.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include <sys/mman.h>

#include "scene.hpp"

struct context
{
    bool initialized = false;
    SDL_Window *window;
    SDL_Renderer *renderer;
    Scene *scene;
    long frameCounter;
};

void init_fs()
{
    EM_ASM(
        FS.mkdir('/persistent_data');
        FS.mount(IDBFS, {}, '/persistent_data');
        Module.print("file sync started...");
        Module.syncdone = 0;
        FS.syncfs(true, function(err) {
                            assert(!err);
                            Module.print("file sync done.");
                            Module.syncdone = 1;
                        });
    );
}

void sync_fs(context *ctx)
{
    msync(ctx->scene->memory->buffer, ctx->scene->memory->memorySize, MS_SYNC);
    EM_ASM(
        if (Module.syncdone) {
            Module.syncdone = 0;
            //Module.print("file sync started...");
            FS.syncfs(false, function(err) {
                                 assert(!err);
                                 //Module.print("file sync done.");
                                 Module.syncdone = 1;
                             });
        }
    );
}

bool init_context(context *ctx)
{
    if (emscripten_run_script_int("Module.syncdone") != 1) return false;

    ctx->initialized = true;
    ctx->window = SDL_CreateWindow("LoopMicro Emulator",
                                   SDL_WINDOWPOS_UNDEFINED,
                                   SDL_WINDOWPOS_UNDEFINED,
                                   640, 480, SDL_WINDOW_RESIZABLE);
    ctx->renderer = SDL_CreateRenderer(ctx->window, -1,
                                       SDL_RENDERER_PRESENTVSYNC);
    ctx->scene = new Scene(ctx->window, ctx->renderer);

    return true;
}

void mainloop(void *arg)
{
    context *ctx = static_cast<context*>(arg);
    if (!ctx->initialized && !init_context(ctx)) return;

    // handle events on queue
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        ctx->scene->handleEvent(&event);
    }

    // run simulation
    ctx->scene->tick();

    // draw scene
    if (ctx->scene->render()) {
        SDL_RenderPresent(ctx->renderer);
    }

    if (ctx->frameCounter++ % 60 == 0) {
        sync_fs(ctx);
    }
}

int main()
{
    init_fs();

    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();

    context ctx = {};

    // prevent main() from exiting
    const int simulate_infinite_loop = 1;
    // call the function as fast as the browser wants to render
    const int fps = -1;
    emscripten_set_main_loop_arg(mainloop, &ctx, fps, simulate_infinite_loop);
}
