#include "u_main.h"

void U_UnchessLoop() 
{
	fprintf(stdout, "hello, unchess!\n");

	bool done = false;
	while (!done) 
	{
		U_Display();		
		SDL_Delay(2000);
		done = true;
	}
}

void U_Display()
{

}

void U_UnchessMain() 
{
	// init interface, SDL
	printf("I_Init: Init interface and SDL.\n");
	I_Init();

	U_UnchessLoop(); // never returns... (almost)

	I_Quit();
}
