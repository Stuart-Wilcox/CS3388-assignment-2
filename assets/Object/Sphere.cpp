#include <cmath>
#include <math.h>
#include <cstdio>
#include "Sphere.hpp"
#include "Object.hpp"

Sphere::Sphere(double radius) {
	Point circle[16];
	circle[0] = Point(0.0, 0.0, radius);
	double angle = 22.5;

	for(int i = 1; i < 16; i++){
		circle[i] = circle[i-1].rotateX(angle);
	}

	// circle is a collection of points in a circle in the YZ plane
	
	Point circle2[16];
	for(int i = 0; i < 16; i++){
		circle2[i] = circle[i].rotateY(angle);
	}

	for(int i = 0; i < 16; i++){
		// draw line between each of the points on the circle
		this->addVertex(Vertex(circle2[15], circle2[0]));
		for(int j = 1; j < 16; j++){
			Vertex v(circle2[j-1],circle2[j]);
			this->addVertex(v);
		}

		// draw a line between the two circles
		for(int j = 0; j < 16; j++){
			Vertex v(circle2[j], circle[j]);
			this->addVertex(v);
		}

		// copy circle2 into circle
		for(int j = 0; j < 16; j++){
			circle[j] = circle2[j];
		}

		// rotate circle2 to next spot
		for(int j = 0; j < 16; j++){
			circle2[j] = circle2[j].rotateY(angle);
		}
	}
}

