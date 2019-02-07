assets = src/assets/*/*.hpp src/assets/*/*.cpp
utils = src/utils/*/*.hpp src/utils/*/*.cpp
clean:
	rm -rf main
main: src/main.cpp $(assets) $(utils)
	g++ -o main src/main.cpp $(assets) $(utils) -lX11 -lm

test_assets: src/test_assets.cpp $(assets)
	g++ -o test_assets src/test_assets.cpp $(assets) -lm

test_utils: src/test_utils.cpp $(utils)
	g++ -o test_utils src/test_utils.cpp $(utils) -lm
