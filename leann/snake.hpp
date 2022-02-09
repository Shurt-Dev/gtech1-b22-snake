#pragma once
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cstdio>

#include "segment.hpp"

class Snake{
    public:
        Snake(int length, int direction);
        ~Snake();
        void move();
        void create(SDL_Renderer* renderer);
        //void eat();
        //void grow();
        void addHead();
        void addBack();
        void turn();
        //void print();
        int direction();
        Segment getHead();
        bool coll();

    private:
        Segment* head = NULL;
        int ypos = 300;
        int xpos = 300;
        int dir;
};