#pragma once
#include <SDL2/SDL.h>

class MainSDLWindow{
public:
  MainSDLWindow();
  ~MainSDLWindow();
  int Init(const char* name, int l, int h);
  SDL_Renderer* GetRenderer(void);
private:
  SDL_Window* window;
  SDL_Renderer* renderer;
};