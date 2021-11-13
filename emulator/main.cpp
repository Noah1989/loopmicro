#include <SDL2/SDL.h>
#include <emscripten.h>
#include <iostream>

#include <scene.h>

struct context
{
    bool initialized = false;
    SDL_Window *window;
    SDL_Renderer *renderer;
    Scene *scene;
};

void init_context(context *ctx)
{
    ctx->initialized = true;
    ctx->window = SDL_CreateWindow("LoopMicro Emulator",
                                   SDL_WINDOWPOS_UNDEFINED,
                                   SDL_WINDOWPOS_UNDEFINED,
                                   640, 480, SDL_WINDOW_RESIZABLE);
    ctx->renderer = SDL_CreateRenderer(ctx->window, -1,
                                       SDL_RENDERER_PRESENTVSYNC);
    ctx->scene = new Scene(ctx->window, ctx->renderer);
}

void mainloop(void *arg)
{
    context *ctx = static_cast<context*>(arg);
    if (!ctx->initialized) init_context(ctx);
    SDL_Renderer *renderer = ctx->renderer;

    // handle events on queue
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        ctx->scene->handleEvent(&event);
    }

    // draw scene
    if (ctx->scene->render()) {
        SDL_RenderPresent(renderer);
    }
}

int main()
{
    SDL_Init(SDL_INIT_VIDEO);

    context ctx = {};

    // prevent main() from exiting
    const int simulate_infinite_loop = 1;
    // call the function as fast as the browser wants to render
    const int fps = -1;
    emscripten_set_main_loop_arg(mainloop, &ctx, fps, simulate_infinite_loop);
}
