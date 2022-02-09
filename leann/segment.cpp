#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "snake.hpp"
#include "window.hpp"
#include "segment.hpp"

Segment::Segment(int x, int y, int dir){
    this->x = x;
    this->y = y;
    this->dir = dir;
    this->next = NULL;
}

Segment::~Segment(){}

void Segment::setDir(int direction){
    this->dir = direction;
}

void Segment::setX(int x){
    this->x =x;
}

void Segment::setY(int y){
    this->y = y;
}

int Segment::getDir(){
    return dir;
}

int Segment::getX(){
    return x;
}

int Segment::getY(){
    return y;
}
