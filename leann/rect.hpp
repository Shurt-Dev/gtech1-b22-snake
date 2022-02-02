#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cstdio>



class Rectangle{
    public:
        Rectangle();
        int init(int x, int y, int w, int h);
        void move();
        //void start();
        void create(SDL_Renderer* renderer);


    private:
        Rectangle* rectangle;
        int ypos = 300;
        int xpos = 300;
};