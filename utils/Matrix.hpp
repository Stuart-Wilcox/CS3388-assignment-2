#include <cmath>
#include <vector>

#define PI 3.141592

class Matrix {
private:
	double matrix[4][4];
public:
	int n;
	int m;
	
	Matrix(int n, int m);
	Matrix(int n, int m, std::vector<std::vector<double>>);

	void print();
	
	double* operator[](int);
	Matrix operator+(Matrix& rhs);
	Matrix operator*(Matrix& rhs);
	
	static Matrix getXRotation(double angle){
		angle = (angle * PI) / 180.0;

		double m[3][3] = {
			{ 1, 0, 0 },
			{ 0, cos(angle), -1.0 * sin(angle) },
			{ 0, sin(angle), cos(angle) }
		};
		
		Matrix x(3,3);
		
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				x[i][j] = m[i][j];
			}
		}

		return x;
	}

	static Matrix getYRotation(double angle){
		angle = (angle * PI) / 180.0;

		double m[3][3] = {
			{ cos(angle), 0, sin(angle) },
			{ 0, 1, 0 },
			{ -1.0 * sin(angle), 0, cos(angle) }
		};

		Matrix x(3,3);
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				x[i][j] = m[i][j];
			}
		}

		return x;
		
	}

	static Matrix getZRotation(double angle){
		angle = (angle * PI) / 180.0;

		double m[3][3] = {
			{ cos(angle), -1.0 * sin(angle), 0 },
			{ sin(angle), cos(angle), 0 },
			{ 0, 0, 1 }
		};

		Matrix x(3,3);
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				x[i][j] = m[i][j];
			}
		}

		return x;
	}
}; 
