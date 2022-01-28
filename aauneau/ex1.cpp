#include <SDL2/SDL.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#include <stdlib.h>
#include "ex1.hpp"
 
int main(int argc, char *argv[])
{
    MainSDLWindow win;
    win.Init("Snake",600, 600);
}

MainSDLWindow::MainSDLWindow(){
    this->window = NULL;
    this->renderer = NULL;
};

MainSDLWindow::~MainSDLWindow(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
};

SDL_Renderer* MainSDLWindow::GetRenderer(void){
    return renderer;
}

int MainSDLWindow::Init(const char* name, int l, int h){
    SDL_Window* fenetre;  // Déclaration de la fenêtre

    if(SDL_Init(SDL_INIT_VIDEO) < 0)  // initialisation de la SDL
    {
       printf("Erreur d'initialisation de la SDL : %s", SDL_GetError());
       return EXIT_FAILURE;
    }

    fenetre = SDL_CreateWindow(name,
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, l, h, SDL_WINDOW_RESIZABLE);  // Création de la fenêtre

    if (fenetre == NULL)  //gestion des erreurs
    {
        printf("Erreur lors de la creation d'une fenetre : %s", SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Delay(3000);  //pause de 3 secondes

    SDL_DestroyWindow(fenetre);
    SDL_Quit();  //on quitte la SDL
    return 0;
};