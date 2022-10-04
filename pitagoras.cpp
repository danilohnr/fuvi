/*
Nombre del archivo: pitagoras.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Ejemplo sobre la biblioteca cmath
*/
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	double cateto1, cateto2, hipotenusa;
	cout << "Ingrese el cateto  1: ";
	cin >> cateto1;
	cout << "Ingrese el cateto 2: ";
	cin >> cateto2;
	
	hipotenusa = sqrt( pow(cateto1,2) + pow(cateto2,2));
	
	cout << "Cateto 1 = " << cateto1 << endl;
	cout << "Cateto 2 = " << cateto2 << endl;
	cout << "Hipotenusa = " << hipotenusa << endl;
	return 0;
}