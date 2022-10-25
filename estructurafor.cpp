/*
Nombre del archivo: estructurafor.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Ejemplo de la estructura for
*/
#include<iostream>

using namespace std;

int main(){
	int tabla;
	cout << "Cual tabla de multiplicar desea mostrar: ";
	cin >> tabla;
	
	for(int i = 1;i < 100;i++){
		if(i % 3 == 0){
			cout << tabla << " x " << i << " = " << tabla*i << endl;
		}
	}
	
	return 0;
}