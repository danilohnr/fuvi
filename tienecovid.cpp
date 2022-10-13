/*
Nombre del archivo: tienecovid.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Mas ejemplos con estructuras condicionales
El programa le va a pedir al usuario que sintomas tiene, y en base a eso
se le va a diagnosticar o no covid19.
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int edad;
	bool tieneDificultadRespiratoria;
	
	cout << "Edad: ";
	cin >> edad;
	
	cout << "Responsa Si o No a las siguientes preguntas: "<< endl;
	cout << "Tiene dificultad para respirar? (Sí - 1, No - 0): ";
	cin >> tieneDificultadRespiratoria;
	
	if(tieneDificultadRespiratoria){
		cout << "Ud tiene problemas respiratorios.";
	}
	
	return 0;
}