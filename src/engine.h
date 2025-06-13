#ifndef ENGINE_H
#define ENGINE_H

#include "game.h"
#include <SDL3/SDL.h>
#include <SDL3/SDL_init.h>

typedef void (*GameUpdate)(SDL_Renderer *renderer, GameState **gameState);

struct RenderContext {
  SDL_Window *window;
  SDL_Renderer *renderer;
};

struct Game {
  bool isValid;
  const char *path;
  SDL_SharedObject *game_object;
  GameUpdate game_update;
};

struct AppState {
  RenderContext *r_context;
  Game *game;
  GameState *gameState;
};

#endif
