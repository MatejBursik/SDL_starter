#include "SDL.h"
#include <iostream>

const int WIDTH = 800, HEIGHT = 800;

int errorBox(const char* message){
    SDL_ShowSimpleMessageBox(SDL_MessageBoxFlags::SDL_MESSAGEBOX_ERROR, "Error", message, nullptr);
    return 0;
}

int testRun(){
    std::cout << "cpp working\n";
    SDL_Log("%s","SDL working");
    SDL_LogCritical(SDL_LogCategory::SDL_LOG_CATEGORY_ERROR, SDL_GetError());
    errorBox("error box test");
    return 0;
}

int main(){
    // testRun();

    SDL_Init(SDL_InitFlags::SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow("Test", WIDTH, HEIGHT, SDL_WINDOW_BORDERLESS);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, NULL, NULL);

    SDL_Event event;
    bool running = true;

    while (running){
        while (SDL_PollEvent(&event)){
            switch (event.type){
                case SDL_EVENT_QUIT:
                    running = false;
                    break;

                case SDL_EVENT_KEY_DOWN:
                    switch (event.key.keysym.sym){
                        case SDLK_ESCAPE:
                            running = false;
                            break;
                    }
                    break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
