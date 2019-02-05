#include "Sphere.hpp"
#include "Object.hpp"

Sphere::Sphere(int radius, Point centre): centre(centre) {
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
}

