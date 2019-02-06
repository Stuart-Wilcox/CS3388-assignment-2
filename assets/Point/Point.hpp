#pragma once

class Point {
public:
	double x;
	double y;
	double z;
	
	Point(){
		this->x = 0.0;
		this->y = 0.0;
		this->z = 0.0;
	}

	Point(double, double, double);
	Point rotateX(double);
	Point rotateY(double);
	Point rotateZ(double);
	Point translate(double, Point);
	Point translate(Point);
	void print();
};
