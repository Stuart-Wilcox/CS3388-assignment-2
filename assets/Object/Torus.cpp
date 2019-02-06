#include <cmath>
#include "Torus.hpp"


Torus::Torus(double radius, double outerRadius){
	/*
	 * Add the points and vertices on the torus
	 */

	// get a set of 16 points on a circle, of radius r and centre c which is r*ratio units from the origin on the x-axis

	const double angle = 22.5;
	
	// create a circle of 16 points
	Point circle1[16];	
	circle1[0] = Point(0.0, 0.0, radius); // first point lies on the x axis
	for(int i = 1; i < 16; i++){
		circle1[i] = circle1[i-1].rotateX(angle);
	}
	// circle1 is now a circle of radius given by argument, in the YZ plane centered at the origin
	// must rotate it about the Y axis 90 degress to put it in the XY plane
	// translate it outerRadius units along the X axis
	for(int i = 0; i < 16; i++){
		circle1[i] = circle1[i].rotateY(90.0);
		circle1[i].x += outerRadius;
	}

	// rotate circle1 points about y-axis, connecting each time
	Point circle2[16];

	for(int i = 0; i < 16; i++){
		// connect circle1 with circle2 if possible
		if(i > 0){
			// conect previous circle with current
			for(int j = 0; j < 16; j++){
				Vertex v(circle1[j], circle2[j]);
				this->addVertex(v);
			}

			// connect the circle points with one another
			for(int j = 1; j < 16; j++){
				Vertex v(circle2[i-1], circle2[i]);
				this->addVertex(v);
			}

			// copy circle2 into circlePoints
			for(int j = 0; j < 16; j++){
				circle1[j] = circle2[j];
			}
		}
		
		// rotate circle2 about y-axis
		for(int j = 0; j < 16; j++){
			circle2[j] = circle2[j].rotateY(angle);
		}
	}
	
}
