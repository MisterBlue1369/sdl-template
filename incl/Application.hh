#pragma once

#include <SDL/SDL.h>

#include <c++/9/vector>

#include <RendererWindow.hh>

class Scene;

class Application {
    public:
	Application();

	void run();

	void events();
	void create();
	void update(float elapsedTime);
	void render();
    private:
	bool running;

	std::vector<Scene*> scenes;
	short currentScene;
    public:
	RendererWindow window;
};
