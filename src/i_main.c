#include "i_main.h"

SDL_Window *window = NULL;

int I_Init()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		SDL_Log("SDL_Init failed: %s", SDL_GetError());
		return EXIT_FAILURE;
	}

	window = SDL_CreateWindow("unchess",
				  SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
				  SCREEN_WIDTH,		   SCREEN_HEIGHT,
				  SDL_WINDOW_SHOWN);
	if (window == NULL) {
		SDL_Log("SDL_CreateWindow failed: %s", SDL_GetError());
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}

void I_Quit()
{
	SDL_DestroyWindow(window);
	window = NULL;

	SDL_Quit();
}
