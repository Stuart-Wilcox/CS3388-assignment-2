#pragma once
#include "../Point/Point.hpp"

/*
 * Represents a line in 3D space. It is simply a connection between two points
 * Is immutable!
 * */
class Vertex {
public:
	Point p1;
	Point p2;

	/*
	 * Creates a new vertex between the given points
	 * */
	Vertex(const Point &a, const Point &b);

	/*
	 * Translates the vertex, using the given point as direction vector
	 * */
	Vertex translate(Point);

	/*
	 * Rotates the vertex about the X-Axis by the given amount of degrees 
	 * */
	Vertex rotateX(double);

	/*
	 * Rotates the vertex about the Y-Axis by the given amount of degrees
	 * */
	Vertex rotateY(double);

	/*
	 * Rotates the vertex about the Z-Axis by the given amount of degrees
	 * */
	Vertex rotateZ(double);

	/*
	 * Prints the vertex to stdout
	 * */
	void print();
};
