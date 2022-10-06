/*
Nombre del archivo: calculosalarioneto.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Ejemplo de programación estructurada
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
int main(){
	//Declaración de variables - Locales
	double salarioBasico, ingresoNeto, ingresoTotal, deduccionesTotales;
	double ingresoAntiguedad, montoSindicato, montoINSS, montoIR, montoINSSPatronal;
	string nombre;
	//Pedir datos al usuario
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << "Hola " << nombre << ", ingrese su salario básico: C$ ";
	cin >> salarioBasico;
	
	system ("CLS");
	
	//Calcular los ingresos
	ingresoAntiguedad = salarioBasico * (TASA_ANTIGUEDAD/100);
	ingresoTotal = salarioBasico + ingresoAntiguedad;
	//Calcular las deducciones al empleado
	montoSindicato = salarioBasico  * (TASA_SINDICATO/100);
	montoINSS = ingresoTotal * (TASA_INSS/100);
	montoIR = ingresoTotal * (TASA_IR/100);
	deduccionesTotales = montoSindicato + montoINSS + montoIR;
	//Calcular ingreso o salario neto
	ingresoNeto = ingresoTotal - deduccionesTotales;
	//Calcular las deducciones al empleador
	montoINSSPatronal = ingresoTotal * (TASA_INSS_PATRONAL/100);
	//Mostrar resultados
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	//muestra de resultados
	cout<<"hola "<<setw(5)<<nombre<<setw(15)<<"  estas son tus cuentas:"<<endl;
	cout<<"el ingreso total es de "<<setw(10)<<right<<ingresototal<<"C$"<<endl;
	
	
	cout<<"_________________________DEDUCCIONES__________________-"<<endl;
	cout<<"tus deducciones totales son: "<<setw(8)<<right<<deduccionestotales<<"C$"<<endl;
	cout<<setw(12)<<"correspondientes a:"<<endl;
	cout<<"deduccion del sindicato:"<<setw(8)<<right<<montosindicato<<"C$"<<endl;
	cout<<"deduccion del inss  :"<<setw(14)<<right<<montoinss<<"C$"<<endl;
	cout<<"deduccion de la tasa ir:"<<setw(8)<<right<<tasair<<"C$"<<endl;
	
		cout<<"_________________________ingreso neto__________________-"<<endl;
	cout<<"tu ingreso neto es igual a: "<<setw(8)<<right<<ingresoneto<<"C$"<<endl;
	return 0;
}



