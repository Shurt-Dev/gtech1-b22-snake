#include <SDL2/SDL.h>
#include <iostream>
#include <unistd.h>
#include "ex1.hpp"
#include "segment.hpp"

int main(){
    MainSDLWindow win;
    win.Init("Snake",600, 600);
    do {
        Snake *head = new Snake;
        head->Move();
        head->Print();
        usleep(1000000);
    } while (true);
    return 0;
}