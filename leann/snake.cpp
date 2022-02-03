#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "snake.hpp"
#include "window.hpp"
#include "segment.hpp"


Snake rect;
SDL_Renderer* renderer;
Snake dir;
const Uint8 *keystates = SDL_GetKeyboardState(NULL);


Snake::Snake(){
  this->snake = NULL;
}


int Snake::init(int x, int y, int w, int h){

  return 0;
}

void Snake::create(SDL_Renderer* renderer){
  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255 );
  SDL_Rect snake;
  snake = {rect.xpos,rect.ypos,45,45}; // Taille et coordonnées du rectangle
  SDL_RenderDrawRect(renderer, &snake); // Dessine le rectangle
        
}

void Snake::start(){
  rect.xpos += 1;
}

void Snake::move() 
{

  if ( keystates[SDL_SCANCODE_UP] ) {
    if ( rect.ypos <= 720 )
      rect.ypos -= 7;
  }

  if ( keystates[SDL_SCANCODE_DOWN] ) {
      if ( rect.ypos <= 720 )
        rect.ypos += 7;
  }
  
    if ( keystates[SDL_SCANCODE_LEFT] ) {
      if ( rect.xpos <= 1080 )
        rect.xpos -= 7;
  }
  
  if ( keystates[SDL_SCANCODE_RIGHT] ) {
    if ( rect.xpos <= 1080 )
      rect.xpos += 7;
  }
}

void Snake::coll(){
  if( rect.xpos >= 1080 || rect.xpos <=0 || rect.ypos >= 720 || rect.ypos <=0){
    std::cout << "fin fenetre";
  }
}