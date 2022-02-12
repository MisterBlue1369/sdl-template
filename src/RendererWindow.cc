#include <RendererWindow.hh>

#include <SDL/SDL_image.h>

RendererWindow::RendererWindow(const char* title, int width, int height){
    window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

void RendererWindow::clear(){
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
}

void RendererWindow::display(){
    SDL_RenderPresent(renderer);
}

SDL_Texture* RendererWindow::getTexture(const char* path){
    return IMG_LoadTexture(renderer, path);
}

void RendererWindow::render(SDL_Texture* texture, SDL_Rect src, SDL_Rect to){
   SDL_RenderCopy(renderer, texture, &src, &to); 
}
