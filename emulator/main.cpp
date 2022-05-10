#include <iostream>
#include <emscripten.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include <sys/mman.h>

#include "scene.hpp"

// 100%
//const int ticksPerFrame = 327673; // prime number
// 10%
//const int ticksPerFrame = 32771; // prime number
// 1%
//const int ticksPerFrame = 3271; // prime number
// 0.1%
const int ticksPerFrame = 331; // prime number
// 0.01%
//const int ticksPerFrame = 31; // prime number
// slowest
//const int ticksPerFrame = 1;

struct context
{
    bool initialized = false;
    SDL_Window *window;
    SDL_Renderer *renderer;
    Scene *scene;
    long frameCounter;
};

context ctx;

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
    for (int i = 0; i < ticksPerFrame; i++) {
        ctx->scene->tick();
    }

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

    ctx = {};

    // prevent main() from exiting
    const int simulate_infinite_loop = 1;
    // call the function as fast as the browser wants to render
    const int fps = -1;
    emscripten_set_main_loop_arg(mainloop, &ctx, fps, simulate_infinite_loop);
}

#include <emscripten/bind.h>

unsigned int peek(std::string source)
{
    if (source == "addr" ) return ctx.scene->addr  ->get_value();
    if (source == "data" ) return ctx.scene->data  ->get_value();
    if (source == "mreq" ) return ctx.scene->nMreq ->get_state() == SignalState::Low;
    if (source == "iorq" ) return ctx.scene->nIorq ->get_state() == SignalState::Low;
    if (source == "rd"   ) return ctx.scene->nRd   ->get_state() == SignalState::Low;
    if (source == "wr"   ) return ctx.scene->nWr   ->get_state() == SignalState::Low;
    if (source == "busak") return ctx.scene->nBusak->get_state() == SignalState::Low;
                           return -1;
}

void poke(std::string target, unsigned int value)
{
         if (target == "addr" ) ctx.scene->dipAddr->value = value;
    else if (target == "data" ) ctx.scene->dipData->value = value;
    else if (target == "mreq" ) ctx.scene->swMreq ->state = value;
    else if (target == "iorq" ) ctx.scene->swIorq ->state = value;
    else if (target == "rd"   ) ctx.scene->swRd   ->state = value;
    else if (target == "wr"   ) ctx.scene->swWr   ->state = value;
}

using namespace emscripten;

EMSCRIPTEN_BINDINGS(my_module) {
    function("peek", &peek);
    function("poke", &poke);
}
