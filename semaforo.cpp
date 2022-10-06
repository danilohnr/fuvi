/*
Nombre del archivo: semaforo.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Mas ejemplos de estructuras condicionales if
*/
#include<iostream>

using namespace std;

int main(){
	int edad;
	char color;
	
	cout << "Ingrese su edad: ";
	cin >> edad;
	
	if(edad < 17){
		cout << "Ud no tiene la edad suficiente para conducir un vehiculo." << endl;
	} else if (edad > 70){
		cout << "Ud ya no puede conducir un vehiculo." << endl;
	} else {
		cout << "Color del semaforo: (r=rojo,a=amarillo,v=verde)";
		cin >> color;
		
		if(color == 'r'){
			cout << "Baje la velocidad hasta deternese suavemente." << endl;
		} else if (color == 'a'){
			cout << "Tenga precaucion. No puede avanzar." << endl;
		} else if (color == 'v'){
			cout << "Siga adelante." << endl;
		} else {
			cout << "Color incorrecto/invalido." << endl;
		}
	}
	cout << "Fin del programa." << endl;
	return 0;
}