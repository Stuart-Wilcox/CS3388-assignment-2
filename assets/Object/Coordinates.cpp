#include "Coordinates.hpp"
#include "../Point/Point.hpp"

Coordinates::Coordinates(){
	Point origin(0,0,0);

	Point xMax(1024,0,0);
	Point xMin(-1024,0,0);
	Point yMax(0,1024,0);
	Point yMin(0,-1024,0);
	Point zMax(0,0,1024);
	Point zMin(0,0,-1024);

	this->addVertex(Vertex(origin, xMax));
	this->addVertex(Vertex(origin, xMin));
	this->addVertex(Vertex(origin, yMax));
	this->addVertex(Vertex(origin, yMin));
	this->addVertex(Vertex(origin, zMax));
	this->addVertex(Vertex(origin, zMin));
}
