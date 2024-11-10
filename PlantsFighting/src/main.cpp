﻿// PlantsFighting.cpp: 定义应用程序的入口点。
//

#include "PlantsFighting/PlantsFighting.h"

Scene* menu_scene = nullptr;
Scene* game_scene = nullptr;
Scene* selector_scene = nullptr;

SceneManager scene_manager;

int main()
{
	ExMessage msg;
	const int FPS = 60;
	LoadGameResources();
	initgraph(1280, 720, EW_SHOWCONSOLE);

	BeginBatchDraw();

	menu_scene = new MenuScene();
	game_scene = new GameScene();
	selector_scene = new SelectorScene();

	scene_manager.SetCurrentScene(menu_scene);

	while (true) {
		DWORD frame_start_time = GetTickCount();

		while (peekmessage(&msg)) {
			scene_manager.on_input(msg);
		}

		scene_manager.on_update();

		cleardevice();
		scene_manager.on_draw();
		FlushBatchDraw();

		DWORD frame_end_time = GetTickCount();
		DWORD frame_delta_time = frame_end_time - frame_start_time;
		if (frame_delta_time < 1000 / FPS) {
			Sleep(1000 / FPS - frame_delta_time);
		}
	}

	EndBatchDraw();

	return 0;
}
