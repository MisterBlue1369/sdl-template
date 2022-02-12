#pragma once

#include <SDL/SDL.h>

class RendererWindow {
    public:
	RendererWindow(const char* title, int width, int height);
	
	void clear();
	void display();

	SDL_Texture* getTexture(const char* path);
	
	void render(SDL_Texture* texture, SDL_Rect src, SDL_Rect to);
    private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};
