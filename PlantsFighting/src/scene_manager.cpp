#include "PlantsFighting/scene_manager.h"

extern Scene* menu_scene;
extern Scene* game_scene;
extern Scene* selector_scene;

void SceneManager::SetCurrentScene(Scene* scene) {
	CurrentScene = scene;
	CurrentScene->on_enter();
}

void SceneManager::SwitchTo(SceneType type) {
	CurrentScene->on_exit();
	switch (type)
	{
	case SceneManager::SceneType::Menu:
		CurrentScene = menu_scene;
		break;
	case SceneManager::SceneType::Game:
		CurrentScene = game_scene;
		break;
	case SceneManager::SceneType::Selector:
		CurrentScene = selector_scene;
		break;
	default:
		break;
	}
	CurrentScene->on_enter();
}

void SceneManager::on_update()
{
	CurrentScene->on_update();
}

void SceneManager::on_draw()
{
	CurrentScene->on_draw();
}

void SceneManager::on_input(const ExMessage& msg)
{
	CurrentScene->on_input(msg);
}
