#pragma once

#include "../Point/Point.hpp"

class Vertex {
public:
	Point p1;
	Point p2;
	Vertex(const Point &a, const Point &b);
	Vertex translate(Point);
	Vertex rotateX(double);
	Vertex rotateY(double);
	Vertex rotateZ(double);
	void print();
};
