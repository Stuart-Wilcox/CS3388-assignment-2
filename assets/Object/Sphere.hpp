#pragma once

#include "Object.hpp"
#include "../Point/Point.hpp"

class Sphere: public Object {
private:
	int radius;
	Point centre;
public:
	Sphere(int radius, Point centre);
};
