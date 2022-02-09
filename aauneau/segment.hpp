#pragma once
#include <SDL2/SDL.h>
#include <string>

class Segment{
public:
  Segment();
  ~Segment();
  
private:
  Segment *next;
};


class Snake{
  public:
    Snake();
    ~Snake();
    int Move();
    void Eat();
    void Print();
  private:
    Segment *head, *segment;
    int x,y;
    int dir;
};