#include "Animation/atlas.h"

void Atlas::LoadFromFile(LPCTSTR path_template, int num)
{
	ImgList.clear();
	ImgList.resize(num);

	TCHAR path_file[256];
	for (int i = 0; i < num; i++) {
		_stprintf_s(path_file, path_template, i + 1);
		loadimage(&ImgList[i], path_file);
	}
}

void Atlas::Clear() {
	ImgList.clear();
}

int Atlas::GetSize() {
	return (int)ImgList.size();
}

IMAGE* Atlas::GetImage(int idx) {
	if (idx < 0 || idx >= ImgList.size()) {
		return nullptr;
	}
	return &ImgList[idx];
}

void Atlas::AddImage(const IMAGE& img) {
	ImgList.push_back(img);
}