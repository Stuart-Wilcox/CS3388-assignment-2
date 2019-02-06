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

void translate(Point direction){
	for(int i = 0; i < this->vertices.size(); i++){
		this->vertices[i] = this.vertices[i].translate(direction);
	}
}

void rotateX(double angle){
	for(int i = 0; i < this->vertices.size(); i++){
		this->vertices[i] = this.vertices[i].rotateX(angle);
	}
}

void rotateY(double angle){
	for(int i = 0; i < this->vertices.size(); i++){
		this->vertices[i] = this.vertices[i].rotateY(angle);
	}
}

void rotateZ(double angle){
	for(int i = 0; i < this->vertices.size(); i++){
		this->vertices[i] = this.vertices[i].rotateZ(angle);
	}
}

void Object::print(){
	printf("Object\n");
	for(int i = 0; i < this->vertices.size(); i++){
		printf("\t");
		this->vertices[i].print();
	}
}
