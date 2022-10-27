/*
Nombre del archivo: actadenotas.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: El usuario ingresará los datos de cada estudiante y se le imprimirá el acta de notas con el promedio del grupo.
*/
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){
	
	//Datos de entrada: Cantidad de estudiantes, nombre y codigo de carnet de estudiante, carrera, asignatura, codigo de asignatura, nombre del docente, inscripcion, pensum, primer parcial 25, segundo parcial 25, tercer parcial 25, acumulados 25
	const string carrera = "Tecnico Superior en Electronica Industrial";
	const string inscripcion = "2022IIS-EI025-01";
	const string asignatura = "Introduccion a la programacion";
	const string codigoAsignatura = "EI025";
	const string pensum = "03-EI01";
	string nombreDocente;
	string fecha;
	int cantidadEstudiantes;
	double promedioNotas;
	
	//Pedir datos al docente
	cout << "*********************************************************" << endl;
	cout << "BIENVENIDO AL SISTEMA DE CONTROL Y REGISTRO ACADEMICO" << endl;
	cout << "*********************************************************" << endl;
	cout << "Nombre del docente: ";
	getline(cin,nombreDocente);
	cout << "Fecha: (DD/MM/AAAA)";
	cin >> fecha;
	cout << "Cantidad de estudiantes del grupo: ";
	cin >> cantidadEstudiantes;
	
	string codigoCarnet[cantidadEstudiantes];
	string nombreCompleto[cantidadEstudiantes];
	int primerParcial[cantidadEstudiantes];		//25
	int segundoParcial[cantidadEstudiantes];	//25
	int tercerParcial[cantidadEstudiantes];		//25
	int acumulados[cantidadEstudiantes];		//25
	int notaFinal[cantidadEstudiantes];			//100
	char observacion[cantidadEstudiantes];		// R-Reprobado, A-Aprobado
	
	cout << "*********************************************************" << endl;
	cout << "INGRESE LOS DATOS DE CADA ESTUDIANTE" << endl;
	cout << "*********************************************************" << endl;
	for(int i = 0; i < cantidadEstudiantes; i++){
		cout << "Estudiante[" << i+1 << "]" << endl;
		cout << "Codigo de Carnet = ";
		cin >> codigoCarnet[i];
		//getline(cin,codigoCarnet[i]);
		cout << "Nombre completo = ";
		getline(cin >> ws,nombreCompleto[i]);
		cout << "Nota primer parcial = ";
		cin >> primerParcial[i];
		cout << "Nota segundo parcial = ";
		cin >> segundoParcial[i];
		cout << "Nota tercer parcial = ";
		cin >> tercerParcial[i];
		cout << "Nota de acumulados = ";
		cin >> acumulados[i];
	}
	//Procesamiento
	//*-Calculo de la nota final
	for(int i = 0; i < cantidadEstudiantes; i++){
		notaFinal[i] = primerParcial[i] + segundoParcial[i] + tercerParcial[i] + acumulados[i];
	}
	//*-Determinar si el estudiante aprobó o reprobó
	for(int i = 0; i < cantidadEstudiantes; i++){
		if(notaFinal[i] < 70){
			observacion[i] = 'R';
		} else {
			observacion[i] = 'A';
		}
	}
	//*-Calcular el promedio del grupo
	int sumaNotas = 0;
	
	for(int i = 0; i < cantidadEstudiantes; i++){
		sumaNotas += notaFinal[i];	//	sumaNotas = sumaNotas + notaFinal[i];
	}
	promedioNotas = sumaNotas / cantidadEstudiantes;
	//Presentación de los resultados - Imprimir el acta de notas
	cout << "*********************************************************" << endl;
	cout << "ACTA DE CALIFICACIONES" << endl;
	cout << "*********************************************************" << endl;
	cout << "Inscripcion:\t" << inscripcion << endl;
	cout << "Asignatura:\t" << asignatura << endl;
	cout << "Docente:\t" << nombreDocente << endl;
	cout << "*********************************************************" << endl;
	cout << left << setw(15) << "CARNET" << setw(40) << "NOMBRE COMPLETO" << setw(10) << "PENSUM" << setw(10) << "NOTA IP" << setw(10) << "NOTA IIP" << setw(10) << "NOTA IIIP" << setw(10) << "NOTA ACU" << setw(10) << "NOTA FINAL" << setw(11) << "OBSERVACION" << endl;
	cout << "*********************************************************" << endl;
	for(int i = 0; i < cantidadEstudiantes; i++){
		cout << left << setw(15) << codigoCarnet[i] << setw(40) << nombreCompleto[i] << setw(10) << pensum << setw(10) << primerParcial[i] << setw(10) << segundoParcial[i] << setw(10) << tercerParcial[i] << setw(10) << acumulados[i] << setw(10) << notaFinal[i] << setw(11) << observacion[i] << endl;
	}
	cout << "*********************************************************" << endl;
	cout << "Promedio del grupo: " << promedioNotas << endl;
	cout << "*********************************************************" << endl;
	return 0;
}