utils = utils/MyWindow.hpp utils/MyWindow.cpp
clean:
	rm -rf main
main: main.cpp $(utils)
	gcc -o main main.cpp $(utils) -lX11 -lm
