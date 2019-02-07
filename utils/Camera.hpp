#pragma once
#include "Matrix.hpp"
#include "../assets/Point/Point.hpp"
#include "../assets/Vertex/Vertex.hpp"
#include "../assets/Object/Object.hpp"
#include "../assets/Scene/Scene.hpp"

/*
 * Represents a camera object, which captures the 3D scene and provides the projection ont the screen
 */
class Camera {
public:
  Matrix camera;
  Point position;
  Point orientation;

  /*
   * Projects a single point
   */
   Point projectPoint(Point);

   /*
    * Projects a single vertex
    */
    Vertex projectVertex(Vertex);

    /*
     * Projects a single object
     */
     Object projectObject(Object);

public:
  /*
   * Default ctor
   */
  Camera();

  /*
   * Creates a new camera at the given point, with Tait-Bryan angles given
   */
  Camera(Point, double, double, double);

  /*
   * Finds the projection of the objects in the given scene and returns a new scene with the modified objects
   */
   Scene projectScene(Scene);
};
