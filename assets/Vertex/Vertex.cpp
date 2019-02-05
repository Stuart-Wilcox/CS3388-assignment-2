#include <cstdio>
#include "Vertex.hpp"
#include "../Point/Point.hpp"

Vertex::Vertex(const Point &p1, const Point &p2): p1(p1), p2(p2) {
	this->p1 = p1;
	this->p2 = p2;
}

void Vertex::print(){
	printf("Vertex ");
	printf("(%f, %f, %f)", this->p1.x, this->p1.y, this->p1.z);
	printf(" to ");
	printf("(%f, %f, %f)\n", this->p2.x, this->p2.y, this->p2.z);
}
