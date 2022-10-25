/*
Nombre del archivo: adivinanza.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Juego de adivinanza de un numero
*/
#include<iostream>
#include<cstdlib> //C Standard Library
#include<ctime>

using namespace std;

int main(){
	srand(time(nullptr));
	int aleatorio = rand() % 10;
	int num;
	
	cout << "Adivine un numero entre 0 y 10" << endl;
	cin >> num;
	while(num != aleatorio){
		cout << "Adivine un numero entre 0 y 10" << endl;
		cin >> num;
	}
	cout << "Felicidades, acertaste." << endl;
	return 0;
}