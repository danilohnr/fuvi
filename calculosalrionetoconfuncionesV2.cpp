/*
Nombre del archivo: calculosalrionetoconfuncionesV2.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Esto solo es una plantilla
Diseñar un algoritmo y luego implementarlo en lenguaje C++.
Se le va a pedir al usuario que ingrese el monto de su salario bruto o básico.
A partir de ese dato se le va a calcular el ingreso neto.
El ingreso neto es igual al ingreso total menos las deducciones totales.
El ingreso total se calcula sumando el ingreso bruto y el ingreso por antiguedad.
El ingreso por antiguedad es igual al 15% del ingreso bruto.
Luego calcular las deducciones totales que son:
deducción del inss
deducción del ir
monto por afiliación del sindicato
El monto por afiliación del sindicato se calcula como el 1% del ingreso bruto.
El monto del inss se calcula como el 7% del ingreso total.
El monto del ir se calcula como el 15.6% del ingreso total.
Se le debe calcular la deducción a la empresa o institución, este es el
INSS patronal y es igual al 22.5% del ingreso total del empleado.
Imprimir el detalle de los cálculos para que el usuario vea cómo se calcula su salario neto.

*/
#include<iostream>
#include<iomanip>
#include<string>
#include<stdlib.h>
using namespace std;
//Variables globales - Constantes
const double TASA_ANTIGUEDAD = 15;
const double TASA_SINDICATO = 1;
const double TASA_INSS = 7;
const double TASA_IR = 15.6;
const double TASA_INSS_PATRONAL = 22.5;
//Declaración de variables - globales
double salarioBasico, ingresoNeto, ingresoTotal, deduccionesTotales;
double ingresoAntiguedad, montoSindicato, montoINSS, montoIR, montoINSSPatronal;
string nombre;
//Prototipos de funciones
void iniciarApp();
double calcularIngresosTotales(double salarioBasico);
double calcularDeduccionesTotales(double ingresoTotal, double salarioBasico);
double calcularIngresoNeto(double ingresoTotal, double deduccionesTotales);
double calcularINSSPatronal(double ingresoTotal);
void presentarResultados();
int main(){
	
	iniciarApp();
	
	return 0;
}
void iniciarApp(){
	//Pedir datos al usuario
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << "Hola " << nombre << ", ingrese su salario básico: C$ ";
	cin >> salarioBasico;	
	system ("CLS");
	ingresoTotal = calcularIngresosTotales(salarioBasico);
	deduccionesTotales = calcularDeduccionesTotales(ingresoTotal, salarioBasico);
	ingresoNeto = calcularIngresoNeto(ingresoTotal, deduccionesTotales);
	montoINSSPatronal = calcularINSSPatronal(ingresoTotal);
	presentarResultados();
}
double calcularIngresosTotales(double salarioBasico){
	//Calcular los ingresos
	ingresoAntiguedad = salarioBasico * (TASA_ANTIGUEDAD/100);
	return salarioBasico + ingresoAntiguedad;
}
double calcularDeduccionesTotales(double ingresoTotal, double salarioBasico){
	//Calcular las deducciones al empleado
	montoSindicato = salarioBasico  * (TASA_SINDICATO/100);
	montoINSS = ingresoTotal * (TASA_INSS/100);
	montoIR = ingresoTotal * (TASA_IR/100);
	return montoSindicato + montoINSS + montoIR;
}
double calcularIngresoNeto(double ingresoTotal, double deduccionesTotales){
	//Calcular ingreso o salario neto
	return ingresoTotal - deduccionesTotales;
}
double calcularINSSPatronal(double ingresoTotal){
	//Calcular las deducciones al empleador
	return ingresoTotal * (TASA_INSS_PATRONAL/100);
}
void presentarResultados(){
	//Mostrar resultados
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	//muestra de resultados
	cout<<"Hola "<<setw(5)<<nombre<<setw(15)<<"  estas son tus cuentas:"<<endl;
	cout<<"El ingreso total es de:\t"<<setw(10)<<right<<"C$"<<ingresoTotal<<endl;
	
	
	cout<<"_________________________DEDUCCIONES__________________-"<<endl;
	cout<<"Tus deducciones totales son:\t "<<setw(8)<<right<<"C$"<<deduccionesTotales<<endl;
	cout<<setw(12)<<"Correspondientes a:"<<endl;
	cout<<"Deduccion del sindicato:\t"<<setw(8)<<right<<"C$"<<montoSindicato<<endl;
	cout<<"Deduccion del INSS:  \t\t"<<setw(8)<<right<<"C$"<<montoINSS<<endl;
	cout<<"Deduccion de la tasa IR:\t"<<setw(8)<<right<<"C$"<<montoIR<<endl;
	
	cout<<"_________________________INGRESO NETO__________________-"<<endl;
	cout<<"Tu ingreso neto es igual a:\t"<<setw(8)<<right<<"C$"<<ingresoNeto<<endl;
	
	cout<<"_________________________INSS PATRONAL__________________-"<<endl;
	cout<<"Deduccion del INSS Patronal es igual a:\t"<<setw(8)<<right<<"C$"<<montoINSSPatronal<<endl;
}