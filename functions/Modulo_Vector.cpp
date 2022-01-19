#include <iostream>
#include <string>
#include <cmath>

//using namespace std;

double Modulo_Vector(double x1, double x2, double x3);
double Vector [3][1];

int main ()
{
	double x1,x2,x3,Mod;
	

	std::cout << "input x1 " << std::endl;
	std::cin >> x1;

	std::cout << "input x2 " << std::endl;
	std::cin >> x2;

	std::cout << "input x3 "<< std::endl;
	std::cin >> x3;

	vector[3],[1] = {{x1},{x2},{x3}};

	// calc Modulo del Vector
	std::cout << "El Modulo del vector es " << std::endl;
	Mod = Modulo_Vector(x1,x2,x3);

	std::cout << Mod << std::endl;


	return 0;
}

double Modulo_Vector(double x1,double x2,double x3)
{
	double Mod;
	Mod = sqrt(pow(x1,2)+pow(x2,2)+pow(x3,2));
	return Mod;
}
