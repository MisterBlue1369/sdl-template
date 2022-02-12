#include <Application.hh>

int main (int argc, char** argv) {
    SDL_Init(SDL_INIT_EVERYTHING);

    Application app;
    app.run();

    SDL_Quit();
    return 0;
}
