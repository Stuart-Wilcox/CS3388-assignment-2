assets = assets/*/*.hpp assets/*/*.cpp
utils = utils/*.hpp utils/*.cpp
clean:
	rm -rf main
main: main.cpp $(assets) $(utils)
	g++ -o main main.cpp $(assets) $(utils) -lX11 -lm
