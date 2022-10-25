/*
Nombre del archivo: estructurafor2.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Ejemplo de la estructura for
*/
#include<iostream>
#include<cstdlib> //C Standard Library
#include<ctime>

using namespace std;

int main(){
	int num, cant,aleatorio, temp;
	bool esEncontrado = false;
	cout << "Ingrese un numero: ";
	cin >> num;
	cout << "Cantidad de numeros: ";
	cin >> cant;
	srand(time(nullptr));
	for(int i = 1;i <= cant;i++){		
		aleatorio = rand() % 100;
		cout << aleatorio << " ";
		if(num == aleatorio){
			esEncontrado = true;
			temp = aleatorio;
		}
	}
	if(esEncontrado){
		cout << "\nEl " << num << " fue encontrado." << endl;
		//cout << "El " << temp << " fue encontrado." << endl;	
	} else {
		cout << "\nEl " << num << " no fue encontrado." << endl;
	}
	
	cout << "Fin del programa.";
	return 0;
}