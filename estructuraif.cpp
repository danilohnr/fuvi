/*
Nombre del archivo: estructuraif.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Ejemplos con estructura condicional if/if..else/if...else...if
*/
#include<iostream>

using namespace std;

int main(){
	
	//Estructura condicional o selectiva if
	
	bool estaAprobado = false, esDesersion = true;	
	//Operador || es el operador logico o
	//Operador && es el operador logico y
	
	if(estaAprobado){
		cout << "Ud ha aprobado la asignatura." << endl;
	} else {
		cout << "Ud NO ha aprobado la asignatura." << endl;
	}
	
	return 0;
}