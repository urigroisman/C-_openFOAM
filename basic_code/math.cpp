// A math program in C++

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
	{
	double m,v;
	string titulo,masa,velocidad;
	
	titulo = "Calculo de la Energia Cinetica";
	masa = "Ingresar valor de la masa (kg)    ";
	velocidad = "Ingresar valor de la velocidad (m/s)    ";

	cout << titulo << endl;
	cout << masa;
	cin >> m;
	cout << velocidad ;
        cin >> v;
	cout << 1.0/2.0*m*pow(v,2) << endl;
	return 0;
	}
