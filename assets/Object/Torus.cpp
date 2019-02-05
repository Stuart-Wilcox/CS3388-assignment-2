#include <cmath>
#include "Torus.hpp"
#include "../../utils/Matrix.h"


Torus::Torus(double radius, double ratio){
	/*
	 * Add the points and vertices on the torus
	 */

	// get a set of 16 points on a circle, of radius r and centre c which is r*ratio units from the origin on the x-axis
	
	Point centre(ratio * radius, 0.0, 0.0);
	
	Point circlePoints[16];

	Point p(centre.x + radius, centre.y + radius, 0.0);

	const double angle = (22.5 * 3.141592) / 180.0;

	Matrix rotation(3,3);
	rotation[0][0] = 1;
	rotation[0][1] = 0;
	rotation[0][2] = 0;

	rotation[1][0] = 0;
	rotation[1][1] = cos(angle);
	rotation[1][2] = -1.0 * sin(angle);
	
	rotation[2][0] = 0;
	rotation[2][1] = sin(angle);
	rotation[2][2] = cos(angle);

	
}
