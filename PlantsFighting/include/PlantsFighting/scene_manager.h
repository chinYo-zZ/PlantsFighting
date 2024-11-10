#pragma once

#include "scene.h"

class SceneManager
{
public:
	enum class SceneType
	{
		Menu,
		Game,
		Selector
	};

public:
	SceneManager() = default;
	~SceneManager() = default;

	void SetCurrentScene(Scene* scene);

	void SwitchTo(SceneType type);

	void on_update();
	void on_draw();
	void on_input(const ExMessage& msg);

private:
	Scene* CurrentScene = nullptr;
};