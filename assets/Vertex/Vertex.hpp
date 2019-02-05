#pragma once

#include "../Point/Point.hpp"

class Vertex {
public:
	Point p1;
	Point p2;
	Vertex(const Point &a, const Point &b);
	void print();
};
