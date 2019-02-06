#pragma once
#include <vector>

#include "../Vertex/Vertex.hpp"

class Object {
protected:
	std::vector<Vertex> vertices;
public:
	Object();
	void addVertex(Vertex);
	std::vector<Vertex> getVertices();
	void translate(Point);
	void rotateX(double);
	void rotateY(double);
	void rotateZ(double);
	void print();
};
