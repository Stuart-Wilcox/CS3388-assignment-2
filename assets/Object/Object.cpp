#include <cstdio>
#include <vector>
#include "Object.hpp"
#include "../Vertex/Vertex.hpp"


Object::Object(): vertices() {
}

void Object::addVertex(Vertex vertex){
	this->vertices.push_back(vertex);
}

std::vector<Vertex> Object::getVertices(){
	return this->vertices;
};

void Object::print(){
	printf("Object\n");
	for(int i = 0; i < this->vertices.size(); i++){
		printf("\t");
		this->vertices[i].print();
	}
}
