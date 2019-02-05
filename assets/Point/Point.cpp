#include <cstdio>
#include "Point.hpp"

Point::Point(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point::print(){
	printf("Point (%f, %f, %f)\n", this->x, this->y, this->z);
}

Point Point::rotateX(double angle){
	return Point(0,0,0);
}

Point Point::rotateY(double angle){
	return Point(0,0,0);
}

Point Point::rotateZ(double angle){
	return Point(0,0,0);
}

Point Point::translate(double distance, Point direction){
	return Point(0,0,0);
}

Point Point::translate(Point distance){
	return Point(0,0,0);
}
