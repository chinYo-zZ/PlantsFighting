#pragma once

#include <vector>
#include <EsayX/include/graphics.h>

class Atlas
{
public:
	Atlas() = default;
	~Atlas() = default;

	void LoadFromFile(LPCTSTR path_template, int num);

	void Clear();
	int GetSize();
	IMAGE* GetImage(int idx);
	void AddImage(const IMAGE& img);

private:
	std::vector<IMAGE> ImgList;
};