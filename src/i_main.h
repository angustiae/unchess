#pragma once

#include <stdlib.h>
#include <stdio.h>

#include <SDL2/SDL.h>

#include "unchessdef.h"

static const int SCALE		= 100;
static const int SCREEN_WIDTH  	= NBOARD * SCALE;
static const int SCREEN_HEIGHT 	= SCREEN_WIDTH; /* for now */

int 	I_Init();
void 	I_Quit();
