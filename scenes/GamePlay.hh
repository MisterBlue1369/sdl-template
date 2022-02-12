#pragma once

#include <Scene.hh>

#include <SDL/SDL.h>

class GamePlay : public Scene {
    private:
    public:
	GamePlay(Application* app) : Scene(app) {}
	void oncreate () override {
	}

	void onupdate (float elapsedTime) override {
	}

	void onrender () override {
	}
};
