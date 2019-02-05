#pragma once

#include "Object.hpp"
#include "../Point/Point.hpp"

class Sphere: public Object {
private:
	double radius;
	Point centre;
public:
	Sphere(double radius, Point centre);
};
