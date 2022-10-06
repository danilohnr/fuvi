/*
Nombre del archivo: manipuladores.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Ejemplos de manipulación de E/S
*/
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	cout << left;
	cout << setw(20) << "Artista" << setw(10) << "Album" << endl
		 << setw(20) << "Michael Jackon" << setw(10) << "Thriller" << endl;
		 
	cout << fixed << setprecision(10) <<12.34467 << endl;
	cout << "********************************" << endl;
	
	cout << left;
	cout << setw(20) << "Asignatura" << setw(10) <<"Estudiantes" << endl
		 << setw(20) << "Programacion" << setw(10) << right << 12 << endl
		 << left << setw(20) << "Redes" << setw(10) << right << 9 << left << endl;
	
	return 0;
}