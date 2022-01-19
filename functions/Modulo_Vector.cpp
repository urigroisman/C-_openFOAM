#include <iostream>
#include <string>
#include <cmath>

//using namespace std;

double Modulo_Vector(double a, double b, double c);
double Vector [3][1];

int main ()
{
	double x1,x2,x3,Mod;
	
	std::cout << "input x1 " << std::endl;
	std::cin >> Vector[0][0];

	std::cout << "input x2 " << std::endl;
	std::cin >> Vector[1][0];

	std::cout << "input x3 "<< std::endl;
	std::cin >> Vector[2][0];

//	Vector[3][1] = {{x1},{x2},{x3}};

// calc Modulo del Vector
	std::cout << "El Modulo del vector es " << std::endl;
// sin usar indices
// Mod = Modulo_Vector(x1,x2,x3);

// con indices	
	Mod = Modulo_Vector(Vector[0][0],Vector[1][0],Vector[2][0]);

	std::cout << Mod << std::endl;


	return 0;
}

double Modulo_Vector(double a,double b,double c)
{
	double Mod;
	Mod = sqrt(pow(a,2)+pow(b,2)+pow(c,2));
	return Mod;
}
