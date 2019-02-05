#pragma once
#include <vector>

#include "../Vertex/Vertex.hpp"

class Object {
private:
	std::vector<Vertex> vertices;
public:
	Object();
	void addVertex(Vertex);
	std::vector<Vertex> getVertices();
};
