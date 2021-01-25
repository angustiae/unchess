#include "u_main.h"

void U_UnchessLoop() {
	fprintf(stdout, "hello, unchess!\n");
}

void U_UnchessMain() {
	// all the init stuff

	U_UnchessLoop(); // never returns...
}
