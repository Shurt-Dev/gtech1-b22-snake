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
        void keyboard();
        //void start();

    private:
        Rectangle* rectangle;
        int ypos = 300;
        int xpos = 300;
};