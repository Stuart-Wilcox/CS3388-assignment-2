#include <cstdio>
#include "Point.hpp"

Point::Point(int x, int y, int z){
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point::print(){
	printf("Point (%d, %d, %d)\n", this->x, this->y, this->z);
}
