#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cstdio>
#pragma once


class MainWindow{
    public:
        MainWindow();
        ~MainWindow();
        int init(const char* title, int width, int height);
        void handleEvents();
        void render();
        void clean();
        SDL_Renderer* getRenderer(){
            return renderer;
        };

        bool running(){
            return isRunning;
        }

    private:
        bool isRunning;
        SDL_Window* window;
        SDL_Renderer* renderer;
};