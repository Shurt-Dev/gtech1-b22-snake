#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "rect.hpp"
#include "window.hpp"

Rectangle rect;
SDL_Renderer* renderer;
const Uint8 *keystates = SDL_GetKeyboardState(NULL);


Rectangle::Rectangle(){
  this->rectangle = NULL;
}


int Rectangle::init(int x, int y, int w, int h){

  return 0;
}

void Rectangle::create(SDL_Renderer* renderer){
  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255 );
  SDL_Rect rectangle;
  rectangle = {rect.xpos,rect.ypos,45,45}; // Taille et coordonnées du rectangle
  SDL_RenderDrawRect(renderer, &rectangle); // Dessine le rectangle
        
}

void Rectangle::move() {
  if ( keystates[SDL_SCANCODE_UP] ) {
    if ( rect.ypos < 720 )
      rect.ypos -= 10;
  }

  if ( keystates[SDL_SCANCODE_DOWN] ) {

      if ( rect.ypos < 720 )
        rect.ypos += 10;
  }
  
    if ( keystates[SDL_SCANCODE_LEFT] ) {

      if ( rect.xpos < 1080 )
        rect.xpos -= 10;
  }
  
  if ( keystates[SDL_SCANCODE_RIGHT] ) {


    if ( rect.xpos < 1080 )
      rect.xpos += 10;
  }
}
