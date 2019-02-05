/* Simple test program for asset classes */
#include <stdlib.h>
#include <cstdio>
#include <vector>
#include "Point/Point.hpp"
#include "Vertex/Vertex.hpp"
#include "Object/Object.hpp"
#include "Object/Sphere.hpp"

int main(){
	Point p1(0,0,0);
	Point p2(1,1,1);
	Point p3(1,2,1);
	Point p4(0,3,0);

	p1.print();
	p2.print();
	p3.print();
	p4.print();

	Vertex v1(p1, p2);
	Vertex v2(p2, p3);
	Vertex v3(p3, p4);
	Vertex v4(p4, p1);

	v1.print();
	v2.print();
	v3.print();
	v4.print();

	Object o1;
	o1.addVertex(v1);
	o1.addVertex(v2);
	o1.addVertex(v3);
	o1.addVertex(v4);

	o1.print();

	Sphere s1(16.0, p1);
	s1.print();
}
