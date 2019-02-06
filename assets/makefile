point = Point/Point.hpp Point/Point.cpp
matrix = ../utils/Matrix.hpp ../utils/Matrix.cpp
vertex = Vertex/Vertex.hpp Vertex/Vertex.cpp
object = Object/Object.hpp Object/Object.cpp
sphere = Object/Sphere.hpp Object/Sphere.cpp
torus = Object/Torus.hpp Object/Torus.cpp

main:	main.cpp $(point) $(matrix) $(vertex) $(object) $(sphere) $(torus)
	g++ -o main main.cpp $(point) $(matrix) $(vertex) $(object) $(sphere) $(torus) -lm
