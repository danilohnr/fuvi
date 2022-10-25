/*
Nombre del archivo: estructuraswitchv2.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Otro ejemplo de la estructura de control condicional múltiple switch
*/
#include<iostream>

using namespace std;

int main(){
	char op;
	int op1, cant;
	double precio;
	cout << "Menu de opciones: " << endl;
	cout << "a- Computadoras\nb- Smartphones\nc- Tablets\nd- Salir" << endl;
	cout << "Seleccione una opcion: ";
	cin >> op;
	
	switch(op){
		case 'A':
		case 'a':			
			cout << "Ud ha seleccionado: Computadoras." << endl;
			cout << "Que tipo de computadora desea comprar: " << endl;
			cout << "1- Desktop\n2- Laptop" << endl;
			cout << "Seleccione una opcion: ";
			cin >> op1;
			switch(op1){
				case 1:
					cout << "Ud ha seleccionado Computadoras: Desktop." << endl;
					cout << "Cantidad a comprar: ";
					cin >> cant;
					precio = 550.99;
					cout << "El monto a pagar es U$" << cant*precio*1.15 << endl;
					break;
				case 2:
					cout << "Ud ha seleccionado Computadoras: Laptop." << endl;
					cout << "Cantidad a comprar: ";
					cin >> cant;
					precio = 950.99;
					cout << "El monto a pagar es U$" << cant*precio*1.15 << endl;
					break;				
			}
			break;
		case 'B':
		case 'b':
			cout << "Ud ha seleccionado: Smartphones." << endl;
			cout << "Que tipo de smartphone desea comprar: " << endl;
			cout << "1- Gama baja\n2- Gama media\n3- Gama alta" << endl;
			cout << "Seleccione una opcion: ";
			cin >> op1;
			switch(op1){
				case 1:
					cout << "Ud ha seleccionado Smartphones: Gama baja." << endl;
					cout << "Cantidad a comprar: ";
					cin >> cant;
					precio = 100.99;
					cout << "El monto a pagar es U$" << cant*precio*1.15 << endl;
					break;
				case 2:
					cout << "Ud ha seleccionado Smartphones: Gama media." << endl;
					cout << "Cantidad a comprar: ";
					cin >> cant;
					precio = 250.99;
					cout << "El monto a pagar es U$" << cant*precio*1.15 << endl;
					break;
				case 3:
					cout << "Ud ha seleccionado Smartphones: Gama alta." << endl;
					cout << "Cantidad a comprar: ";
					cin >> cant;
					precio = 1100.99;
					cout << "El monto a pagar es U$" << cant*precio*1.15 << endl;
					break;		
			}
			break;
		case 'C':
		case 'c':
			cout << "Ud ha seleccionado: Tablets." << endl;
			cout << "Que tipo de tablet desea comprar: " << endl;
			cout << "1- Con SIM\n2- Sin SIM";
			cin >> op1;
			break;
		case 'D':
		case 'd':
			cout << "Ud ha salido correctamente de la aplicacion." << endl;
			break;
		default:
			cout << "Opcion incorrecta." << endl;
	}
	cout << "Fin de la aplicacion" << endl;
	
	return 0;
}