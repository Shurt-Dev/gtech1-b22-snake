#include "window.hpp"
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

MainWindow::MainWindow()
{
  this->window = NULL;
  this->renderer = NULL;
}

int MainWindow::init(const char* title,int width, int height)
{
  if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
  {
    std::cout << "SDL_INIT ERROR" << std::endl;
    return EXIT_FAILURE;
  }
  
  this->window = SDL_CreateWindow("Snake",SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1080, 720, SDL_WINDOW_RESIZABLE);
  if(this->window == NULL) { 
    std::cout << "WINDOW ERROR" << std::endl;
    return EXIT_FAILURE;
  }

  this->renderer = SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED );
  if(this->renderer == NULL) {
    std::cout << "RENDERER ERROR" << std::endl;
    return EXIT_FAILURE;
  }
  isRunning = true;
}

MainWindow::~MainWindow()
{
 /* SDL_DestroyWindow(this->window);
  SDL_DestroyRenderer(this->renderer);
  SDL_Quit();  */
}

void MainWindow::handleEvents(){
  SDL_Event event;
  SDL_PollEvent(&event);
  if(event.type == SDL_QUIT) {
    isRunning = false;
    SDL_Quit();
  }
}

void MainWindow::clean() {
  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);
  SDL_Quit();
}



/*Rectangle::Rectangle(){
  SDL_Rect rectangle = {};
}

int SDL_Rect(int x, int y, int w, int h){
  rectangle = SDL_Rect(0,0,50,50);
}*/


/*void keyboard() {
  const Uint8 *keystates = SDL_GetKeyboardState(NULL);

  if (keystates[SDL_SCANCODE_UP]) {
     ...
  }
  if (keystates[SDL_SCANCODE_DOWN]) {
    ...
  }
  if (keystates[SDL_SCANCODE_LEFT]) {
    ...
  }
  if (keystates[SDL_SCANCODE_RIGHT]) {
    ...
  }
}*/