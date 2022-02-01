#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "rect.hpp"

Rectangle rect;
const Uint8 *keystates = SDL_GetKeyboardState(NULL);


Rectangle::Rectangle(){
  this->rectangle = NULL;
}


int Rectangle::init(int x, int y, int w, int h){
  return 0;
}

void Rectangle::keyboard() {
  if ( keystates[SDL_SCANCODE_UP] ) {
    rect.ypos += ypos;
    if ( rect.ypos <= 720 )
      printf("ok");
      rect.ypos += 10;
    printf("up");
  }

  if ( keystates[SDL_SCANCODE_DOWN] ) {
    rect.ypos += ypos;
      if ( rect.ypos <= 720 )
        printf("ok");
        rect.ypos += 10;
      printf("down");
  }
  
    if ( keystates[SDL_SCANCODE_LEFT] ) {
      rect.xpos += xpos;
      if ( rect.xpos <= 1080 )
        printf("ok");
        rect.xpos += 10;
      printf("left");
  }
  
  if ( keystates[SDL_SCANCODE_RIGHT] ) {
    rect.xpos += xpos;
    if ( rect.xpos <= 1080 )
      printf("ok");
      rect.xpos += 10;
    printf("right");
  }
}

/*void Rectangle::start(){
    if ( keystates[SDL_SCANCODE_UP] ) {
    rect.ypos += 10;

  }
}*/