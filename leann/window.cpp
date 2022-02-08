#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "window.hpp"

MainWindow::MainWindow()
{
  this->window = NULL;
  this->renderer = NULL;
}

  // FONCTION INITIALISATION DE FENETRE + VERIF ERREURS

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
  return 0;
}

MainWindow::~MainWindow()
{
  SDL_DestroyWindow(this->window);
  SDL_DestroyRenderer(this->renderer);
  SDL_Quit();  
}

  // FONCTION GESTION DES EVENTS

void MainWindow::handleEvents(){
  SDL_Event event;
  SDL_PollEvent(&event);
  if(event.type == SDL_QUIT) {
    isRunning = false;
    SDL_Quit();
  }
}

  // FONCTION DESTRUCTION DE FENETRE, RENDER

void MainWindow::clean() {
  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);
  SDL_Quit();
}
