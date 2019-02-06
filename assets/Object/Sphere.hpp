#pragma once
#include "Object.hpp"
#include "../Point/Point.hpp"

/*
 * Represents a sphere object in 3D space
 * */
class Sphere: public Object {
private:
	double radius;
public:
	/*
	 * Creates a new sphere with given radius. The sphere is has its centre at the origin.
	 * */
	Sphere(double radius);
};
