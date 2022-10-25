/*
Nombre del archivo: estructurawhile.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Ejemplo de estructura repetitiva while
*/
#include<iostream>

using namespace std;

int main(){
	int edad;
	string nombre;
	cout << "Ingrese su nombre: ";
	getline(cin,nombre);
	cout << "\nIngrese su edad: ";
	cin >> edad;
	
	while(edad < 0){
		cout << "Ingrese su edad: ";
		cin >> edad;
	}
	cout << "Bienvenido, " << nombre << endl;
	cout << "Fin de la aplicacion.";
	return 0;
}