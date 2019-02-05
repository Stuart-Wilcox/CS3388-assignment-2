#include <cmath>
#include <math.h>
#include <cstdio>
#include "Sphere.hpp"
#include "Object.hpp"

Sphere::Sphere(double radius, Point centre): centre(centre) {
	/* TODO */

	// draw 8 points from base to top
	//	*
	//	   *
	//	    *    
	//	     *
	//	     *
	//	    *
	//	   *
	//	*
	
	// top point should be <radius> units above centre
	// bottom point should be <radius> units below centre
	// every other point should be magnitude <radius> away from centre, and follow sin + cos rules
	
	// (x-centre.x)^2 + (y-centre.y)^2 + (z-centre.z)^2 = r^2
	// go over 8 values of z, from +r to -r
	//
	Point prev(0,0,0);
	double step = radius / 4.0;

	// printf("step: %f\n", step);

	for(double z = -1.0 * radius; z <= radius; z += step){	
		double x_min = sqrt((radius*radius) - (z*z));
		double x_step = x_min / 4.0;

		// printf("x_min: %f\n", x_min);
		// printf("x_step: %f\n", x_step);
		
		for(double x = -1.0 * x_min; x <= x_min && x_step > 0; x += x_step){
			double y = sqrt((radius*radius) - (z*z) - (x*x));
			if(isnan(y)){
				y = 0.0;
			}	
				Point p(x,y,z); // create the point
				// p.print();

				if(prev.x != 0 && prev.y != 0 && prev.z != 0){
					Vertex v(prev, p);
					this->addVertex(v);

					prev = p;
				}
				else {
					Vertex v(p, p);
					this->addVertex(v);

					prev = p;
				}
		}
		
	}
}

