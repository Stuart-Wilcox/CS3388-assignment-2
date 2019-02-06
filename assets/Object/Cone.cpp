#include <cstdio>
#include <cmath>
#include <vector>
#include "Cone.hpp"


Cone::Cone(double radius, double height){
  this->resolution = 36;

  const double angle = 360.0 / this->resolution;

  std::vector<Point> circle;
  Point p(0.0,0.0,radius);
  circle.push_back(p);

  // figure out the points on the circle
  for(int i = 1; i < this->resolution; i++){
    p = p.rotateY(angle);
    circle.push_back(p);
  }

  Point top(0.0,height,0.0);
  // connect everything together
  this->addVertex(Vertex(circle[0], top));
  this->addVertex(Vertex(circle[0], circle[this->resolution-1]));
  for(int i = 1; i < this->resolution; i++){
    this->addVertex(Vertex(circle[i], top));
    this->addVertex(Vertex(circle[i], circle[i-1]));
  }
}
