/*
Nombre del archivo: jugardados.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Otro ejemplo sobre numeros aleatorios
*/
#include<iostream>
#include<cstdlib> //C Standard Library
#include<ctime>

using namespace std;

int main(){
	srand(time(nullptr)); // seed random, semilla de inicio
	int valorMin = 1, valorMax = 6;
	
	//Formula para generar numeros dentro de un rango
	short dado1 = (rand() % (valorMax - valorMin + 1))+ valorMin;
	short dado2 = (rand() % (valorMax - valorMin + 1))+ valorMin;
	
	cout << dado1 << " , " << dado2;
	
	return 0;
}