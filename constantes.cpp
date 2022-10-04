/*
Nombre del archivo: constantes.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Uso de las constantes
*/
#include<iostream>
#include<cmath>

using namespace std;
//Variables globales
const double pi = 3.141592;

int main(){
	
	double radio, area;
	cout << "Ingrese el radio del circulo: ";
	cin >> radio;
	area = pi * pow(radio,2);
	cout << "El area de un circulo con radio " << radio << " es " << area;
	return 0;
}