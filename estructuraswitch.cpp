/*
Nombre del archivo: estructuraswitch.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Ejemplo de la estructura de control condicional múltiple switch
*/
#include<iostream>

using namespace std;

int main(){
	int op;
	cout << "Menu de opciones: " << endl;
	cout << "1- Computadoras\n2- Smartphones\n3- Tablets\n4- Salir" << endl;
	cout << "Seleccione una opcion: ";
	cin >> op;
	
	switch(op){
		case 1:
			cout << "Ud ha seleccionado: Computadoras." << endl;
			break;
		case 2:
			cout << "Ud ha seleccionado: Smartphones." << endl;
			break;
		case 3:
			cout << "Ud ha seleccionado: Tablets." << endl;
			break;
		case 4:
			cout << "Ud ha salido correctamente de la aplicacion." << endl;
			break;
		default:
			cout << "Opcion incorrecta." << endl;
	}
	cout << "Fin de la aplicacion" << endl;
	
	return 0;
}