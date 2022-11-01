/*
Nombre del archivo: funciones.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Introducción a las funciones en C++
*/
#include<iostream>

using namespace std;
//1-Prototipos de función
void saludar(); // Prototipo de función que no retorna algún valor ni requiere datos de entrada
void otroSaludo(string nombre); // Prototipo de función que no retorna algún valor pero requiere 1 dato de entrada
int main(){
	//3-Llamada o invocación la(s) funciones
	string nombre;
	
	//saludar();
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	otroSaludo(nombre);
	
	return 0;
}
//2- Definición de funciones
void saludar(){
	cout << "Bienvenido a esta App, desde la funcion saludar()";	
}
void otroSaludo(string nombre){
	cout << "Bienvenido a esta App, " << nombre << endl;
	saludar();
}




