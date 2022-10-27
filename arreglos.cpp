/*
Nombre del archivo: arreglos.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Ejemplos con arreglos
*/
#include<iostream>

using namespace std;

int main(){
	int cant;
	//TIPO_DE_DATO NOMBRE_ARREGLO [TAMAÑO/DIMENSION]
	cout << "Ingrese la cantidad de datos: ";
	cin >> cant;
	
	double promediosNotas[cant];
	double precios[10] {};
	for(int i = 0; i < 10; i++){
		cout  << precios[i] << " ";
	}
	
	//promediosNotas[0] = 15.2;
	//promediosNotas[1] = 55.8;
	
	cout << "Ingrese los datos: " << endl;
	for(int i = 0; i < cant;i++){
		cout << "Elemento [" << i << "] = ";
		cin >> promediosNotas[i];
	}
	for(int i = 0; i < cant;i++){
		cout << "Elemento [" << i << "] = " << promediosNotas[i] << endl;		
	}	

	
	return 0;
}