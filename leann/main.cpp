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
    Uint32 frame_rate, frame_time, frame_delay = 20;
    

    window.init("Snake", 1080, 720); // Creation de la fenetre
    renderer.render();
    SDL_SetRenderDrawColor(window.getRenderer(), 255, 255, 255, 255); // Donne la couleur du rectangle
   
    
    

    while(window.running() == true){
        frame_rate = SDL_GetTicks();
        //SDL_RenderPresent(window.getRenderer());
        rect.move();

        SDL_SetRenderDrawColor(window.getRenderer(), 0, 0, 0, 255);
        SDL_RenderClear(window.getRenderer());
        SDL_SetRenderDrawColor(window.getRenderer(), 255, 0, 0, 255);
        

        rect.create(window.getRenderer());    
        SDL_RenderPresent(window.getRenderer());
        
        


        SDL_Event event;
        if(SDL_PollEvent(&event)){
            if(event.type == SDL_QUIT){
                window.clean();
                break;
            }
        }
        frame_time = SDL_GetTicks() - frame_rate;
        if(frame_time < frame_delay){
            SDL_Delay( frame_delay - frame_time );
        }
    }
    
    return 0;
}