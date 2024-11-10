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
	int timer = 0;              //��ʱ��
	int interval = 0;           //֡���
	int idx_frame = 0;			//֡����
	bool is_loop = true;		//�Ƿ�ѭ��
	Atlas* atlas = nullptr;

	std::function<void()> callback;
};