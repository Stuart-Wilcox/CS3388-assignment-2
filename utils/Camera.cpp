#include <cmath>
#include "Camera.hpp"

Camera::Camera(Point position, double angleX, double angleY, double angleZ): camera(3,3), position(0,0,0) {
  this->position.x = position.x;
  this->position.y = position.y;
  this->position.z = position.z;


  double c1[3][3] = {
    { 1, 0, 0 },
    { 0, cos(angleX), sin(angleX) },
    { 0, -1.0*sin(angleX), cos(angleX) }
  };

  double c2[3][3] = {
    { cos(angleY), 0, -1.0*sin(angleY) },
    { 0, 1, 0 },
    { sin(angleY), 0, cos(angleY) }
  };

  double c3[3][3] = {
    { cos(angleZ), sin(angleZ), 0 },
    { -1.0*sin(angleZ), cos(angleZ), 0 },
    { 0, 0, 1 }
  };

  Matrix m1(3,3);
  Matrix m2(3,3);
  Matrix m3(3,3);

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      m1[i][j] = c1[i][j];
      m2[i][j] = c2[i][j];
      m3[i][j] = c3[i][j];
    }
  }

  this->camera = m1 * m2 * m3;
}

Scene Camera::projectScene(Scene scene){
  Scene s;
  for(int i = 0; i < scene.getObjects().size(); i++){
    s.addObject(this->projectObject(scene.getObjects()[i]));
  }
  return s;
}

Object Camera::projectObject(Object object){
  Object o;
  for(int i = 0; i < object.getVertices.size(); i++){
    o.addVertex(this->projectVertex(object.getVertices()[i]));
  }
  return o;
}

Vertex Camera::projectVertex(Vertex vertex){
  return Vertex(this->projectPoint(vertex.p1), this->projectPoint(vertex.p2));
}

Point Camera::projectPoint(Point point){
  return Point(point.x, point.y, 0.0);
}
