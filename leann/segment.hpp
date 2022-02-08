#pragma once


class Segment {
public:
  Segment* next = NULL;
  Segment(int x, int y, int dir);
  ~Segment();
  void setDir(int direction);
  void setX(int x);
  void setY(int y);
  int getDir();
  int getX();
  int getY();
  

private:
  int x;
  int y;
  int dir;
};