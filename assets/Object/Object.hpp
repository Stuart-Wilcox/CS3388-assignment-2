#pragma once
#include <vector>
#include "../Vertex/Vertex.hpp"

/*
 * Represents an abstract 3D object, which is a collection of vertices
 * */
class Object {
protected:
	std::vector<Vertex> vertices;
public:
	/*
	 * Creates a new object with no vertices
	 * */
	Object();

	/*
	 * Adds a vertex to the object's vertices
	 * */
	void addVertex(Vertex);

	/*
	 * Returns a vector of the object's vertices
	 * */
	std::vector<Vertex> getVertices();

	/*
	 * Translates the object, using the given point as a direction vector
	 * This modifies the object permanently
	 * */
	void translate(Point);

	/*
	 * Rotates the object about the X-Axis by the given amount of degrees
	 * This modifies the object permanently
	 * */
	void rotateX(double);

	/*
	 * Rotates the object about the Y-Axis by the given amount of degrees
	 * This modifies the object permanently
	 * */
	void rotateY(double);

	/*
	 * Rotates the object about the Z-Axis by the given amount of degrees
	 * This modifies the object permanently
	 * */
	void rotateZ(double);

	/*
	 * Prints the object to stdout
	 * */
	void print();
};
