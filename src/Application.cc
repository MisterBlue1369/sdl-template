#include <Application.hh>

// Scenes

#include <GamePlay.hh>

Application::Application()
    : window(RendererWindow("uwu",400,400))
{}

void Application::run(){
    create();

    float currentTime, 
	  prevTime = SDL_GetTicks(),
	  elapsedTime;

    running = true;
    while (running) {
	currentTime = SDL_GetTicks();
	elapsedTime = (currentTime - prevTime) / 1000;

	events();
	update(elapsedTime);
	render();

	prevTime = currentTime;
    }
}

void Application::events(){
    SDL_Event e;
    while(SDL_PollEvent(&e)) switch (e.type){
	case SDL_QUIT:
	    running = false;
	    break;
    }
}

void Application::create(){
    scenes.push_back(new GamePlay(this));
    currentScene = 0;

    for (auto scene : scenes)
	scene->oncreate();
}

void Application::update(float elapsedTime){
    scenes[currentScene]->onupdate(elapsedTime);
}

void Application::render(){
    window.clear();
    scenes[currentScene]->onrender();
    window.display();
}
