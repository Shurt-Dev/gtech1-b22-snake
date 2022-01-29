#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "window.hpp"

//int SDL_RenderDrawRect(SDL_Renderer * renderer, const SDL_Rect * rect);

//int SDL_BlitSurface(SDL_Surface* src, const SDL_Rect* srcrect, SDL_Surface* dst, SDL_Rect* dstrect);

int main(void) 
{
    MainWindow window;
    MainWindow renderer;


    window.init("Snake", 1080, 720);
    SDL_SetRenderDrawColor(window.getRenderer(), 200, 50, 100, 200);

    SDL_Rect rectangle = {300,300,70,70};
    SDL_RenderDrawRect(window.getRenderer(), &rectangle);
    SDL_RenderPresent(window.getRenderer());

    while(window.running() == true){

        SDL_Event event;
        if(SDL_PollEvent(&event)){
            if(event.type == SDL_QUIT){
                window.clean();
                break;
            }
        }
    }
    return 0;
}