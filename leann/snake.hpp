#pragma once
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cstdio>

//#include "segment.hpp"

class Snake{
    public:
        Snake();
        int init(int x, int y, int w, int h);
        void move();
        void start();
        void create(SDL_Renderer* renderer);
        void eat();
        //void turn();
        void coll();
        void dir();

    private:
        //int dir;
        //Segment* head;
        Snake* snake;
        int ypos = 300;
        int xpos = 300;
};