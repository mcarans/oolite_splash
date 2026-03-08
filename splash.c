#include <SDL2/SDL.h>

int main(int argc, char* argv[]) {
	if (argc < 2) return 1;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		return 1;
	}

	// Load the bitmap to get dimensions
	SDL_Surface* surface = SDL_LoadBMP(argv[1]);
	if (!surface) {
		SDL_Quit();
		return 1;
	}

	// SDL2 uses SDL_WINDOWPOS_CENTERED as a coordinate value
	SDL_Window* window = SDL_CreateWindow(
		"Splash",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		surface->w,
		surface->h,
		SDL_WINDOW_BORDERLESS
	);

	if (!window) {
		SDL_FreeSurface(surface);
		SDL_Quit();
		return 1;
	}

	// Get the surface associated with the window
	SDL_Surface* winSurface = SDL_GetWindowSurface(window);

	// Copy the image surface to the window surface
	SDL_BlitSurface(surface, NULL, winSurface, NULL);

	// Update the window to display the blitted image
	SDL_UpdateWindowSurface(window);

	// Stay open for 1 second (1000ms)
	SDL_Delay(1000);

	// Cleanup
	SDL_FreeSurface(surface);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}