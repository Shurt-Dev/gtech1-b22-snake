#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "window.hpp"
#include "rect.hpp"



int main(void) 
{
    MainWindow window;
    MainWindow renderer;
    Rectangle rect;
    Uint32 frame_rate = 20;

    window.init("Snake", 1080, 720); // Creation de la fenetre

    SDL_SetRenderDrawColor(window.getRenderer(), 255, 0, 0, 0); // Donne la couleur du rectangle
    SDL_Rect rectangle = {300,300,70,70}; // Taille et coordonnées du rectangle

    SDL_RenderDrawRect(window.getRenderer(), &rectangle); // Dessine le rectangle
    SDL_RenderPresent(window.getRenderer());

    while(window.running() == true){
        rect.keyboard();
        SDL_RenderPresent(window.getRenderer());

        //SDL_RenderClear(window.getRenderer());
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