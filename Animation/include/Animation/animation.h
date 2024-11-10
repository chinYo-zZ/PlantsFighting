#pragma once

#include "atlas.h"
#include "util.h"
#include <functional>

class Animation
{
public:
	Animation() = default;
	~Animation() = default;

	void Reset();
	void SetAtlas(Atlas* NewAtlas);
	void SetLoop(bool Flag);
	void SetInterval(int ms);

	int GetidxFrame();
	IMAGE* GetFrame();
	bool CheckFinished();

	void OnUpdate(int delta);

	void SetCallBack(std::function<void()>callback);

	void OnDraw(int x, int y) const;
private:
	int timer = 0;              //计时器
	int interval = 0;           //帧间隔
	int idx_frame = 0;			//帧索引
	bool is_loop = true;		//是否循环
	Atlas* atlas = nullptr;

	std::function<void()> callback;
};