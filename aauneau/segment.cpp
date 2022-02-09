#include <SDL2/SDL.h>
#include <stdio.h>
#include <string>
#include "segment.hpp"

int x,y,dir;


Snake::Snake(){
    int x = 5;
    int y = 10;
    int dir;
};

Snake::~Snake(){

};

int Snake::Move(){
const Uint8 *keystates = SDL_GetKeyboardState(NULL);
  if ( keystates[SDL_SCANCODE_UP] && this->dir != SDL_SCANCODE_DOWN ) {
    this->dir = SDL_SCANCODE_UP;
    y -= 1;
  }

  else if ( keystates[SDL_SCANCODE_DOWN] && this->dir != SDL_SCANCODE_UP ) {
    this->dir = SDL_SCANCODE_DOWN;
    y += 1;
  }
    
  else if ( keystates[SDL_SCANCODE_LEFT] && this->dir != SDL_SCANCODE_RIGHT) {
    this->dir = SDL_SCANCODE_LEFT;
    x -= 1;
  }
    
  else if ( keystates[SDL_SCANCODE_RIGHT] && this->dir != SDL_SCANCODE_LEFT ) {
    this->dir = SDL_SCANCODE_RIGHT;
    x += 1;
  }
  keystates = NULL;
  return dir;  
};

void Snake::Eat(){

};

void Snake::Print(){
    printf("%d,%d,%d\n",this->x,this->y,this->dir);
};

Segment::Segment(){

};

Segment::~Segment(){

};