#pragma once

#include <Application.hh>

class Scene {
    public:
	Scene(Application* p_app) : app(p_app) {}
	virtual void oncreate() = 0;
	virtual void onupdate(float eplapsedTime) = 0;
	virtual void onrender() = 0;
    protected:
	Application* app;
};
