#include "SDL.h"

int main(int argc, char* args[]){
	SDL_Window* gWindow = NULL;
	SDL_Init(SDL_INIT_VIDEO);
	gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 640, SDL_WINDOW_SHOWN);
	
	while (1) {

	}

	//Destroy window
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;
}