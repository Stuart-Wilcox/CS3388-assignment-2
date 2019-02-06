#include <cstdio>
#include "Vertex.hpp"
#include "../Point/Point.hpp"

Vertex::Vertex(const Point &p1, const Point &p2): p1(p1), p2(p2) {
	this->p1 = p1;
	this->p2 = p2;
}

Vertex Vertex::translate(Point direction){
	return Vertex(this->p1.translate(direction), this->p2.translate(direction));
}

Vertex rotateX(double angle){
	return Vertex(this->p1.rotateX(angle), this->p2.rotateX(angle));
}

Vertex rotateY(double angle){
	return Vertex(this->p1.rotateY(angle), this->p2.rotateY(angle));
}

Vertex rotateZ(double angle){
	return Vertex(this->p1.rotateZ(angle), this->p2.rotateZ(angle));
}

void Vertex::print(){
	printf("Vertex ");
	printf("(%f, %f, %f)", this->p1.x, this->p1.y, this->p1.z);
	printf(" to ");
	printf("(%f, %f, %f)\n", this->p2.x, this->p2.y, this->p2.z);
}
