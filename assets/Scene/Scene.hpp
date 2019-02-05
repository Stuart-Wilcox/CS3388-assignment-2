#pragma once

#include <vector>
#include "../Object/Object.hpp"

class Scene {
private:
	static const int MAX_X=1024;
	static const int MAX_Y=1024;
	static const int MAX_Z=1024;
	std::vector<Object> objects;

public:
	Scene();
	void addObject(Object);
	void drawScene();
};
