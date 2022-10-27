/*
Nombre del archivo: arreglosbidimensionales.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Ejemplos de arreglos bidimensionales
*/
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	//TIPO_DATO NOMBRE_ARREGLO [DIMENSION01][DIMENSION02]
	int matrizA[2][2];
	cout << "Ingrese los datos: " << endl;
	for(int i = 0;i < 2; i++){ //Para recorrer las filas
		for(int j = 0; j < 2;j++){ //Para recorrer las columnas
			cout << "Elemento [" << i << "," << j << "] = ";
			cin >> matrizA[i][j];
		}
	}
	cout << "****************************" << endl;
	for(int i = 0;i < 2; i++){ //Para recorrer las filas
		for(int j = 0; j < 2;j++){ //Para recorrer las columnas
			cout << right << setw(15) << "Elemento [" << i << "," << j << "] = " << matrizA[i][j];
		}
		cout << endl;
	}
	cout << endl;
	double matrizB[2][2] {};
		for(int i = 0;i < 2; i++){ //Para recorrer las filas
		for(int j = 0; j < 2;j++){ //Para recorrer las columnas
			cout << right << setw(15) << "Elemento [" << i << "," << j << "] = " << matrizB[i][j];
		}
		cout << endl;
	}
	return 0;
}