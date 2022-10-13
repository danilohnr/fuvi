/*
Nombre del archivo: CalculadoraResistencias.cpp
Autor: Danilo Noguera
Lugar: ITV
Instrucciones: Calcula la resistencia y tolerancia de resistencias en base al color de sus bandas
*/
#include<iostream>

using namespace std;
//Colores Números
const int NEGRO_NUM		=	0;
const int CAFE_NUM		=	1;
const int ROJO_NUM		=	2;
const int NARANJA_NUM	=	3;
const int AMARILLO_NUM	=	4;
const int VERDE_NUM		=	5;
const int AZUL_NUM		=	6;
const int VIOLETA_NUM	=	7;
const int GRIS_NUM		=	8;
const int BLANCO_NUM	=	9;
//Colores Multiplicadores
const long long NEGRO_MULTI		=	1;
const long long CAFE_MULTI		=	10;
const long long ROJO_MULTI		=	100;
const long long NARANJA_MULTI		=	1000;
const long long AMARILLO_MULTI	=	10000;
const long long VERDE_MULTI		=	100000;
const long long AZUL_MULTI		=	1000000;
const long long VIOLETA_MULTI		=	10000000;
const long long GRIS_MULTI		=	100000000;
const long long BLANCO_MULTI		=	1000000000;
const double ORO_MULTI		=	0.1;
const double PLATA_MULTI	=	0.01;
//Colores Tolerancia
const int ORO_TOLER		=	5;
const int PLATA_TOLER	=	10;
const int SIN_COLOR_TOLER=	20;
//Ejemplo: rojo (= 2), negro (= 0), naranja (= 10^3) y oro (= 5%), por lo que el valor de la resistencia es de 20 x 10^3 = 20 ohms con un valor de tolerancia de 5% = 1 ohm

int main(){
	
	int cant_bandas;
	int primer_color, segundo_color, tercer_color, cuarto_color;
	long long primer_digito, segundo_digito, tercer_digito, cuarto_digito;
	double resistencia;
	
	cout << "Cantidad de bandas de la resistencia: ";
	cin >> cant_bandas;
	
	if(cant_bandas == 4){
		cout << "1-negro\n2-cafe\n3-rojo\n4-naranja\n5-amarillo\n6-verde\n7-azul\n8-violeta\n9-gris\n10-blanco\n\n";
		cout << "Primer color: ";
		cin >> primer_color;
		cout << "1-negro\n2-cafe\n3-rojo\n4-naranja\n5-amarillo\n6-verde\n7-azul\n8-violeta\n9-gris\n10-blanco\n\n";
		cout << "Segundo color: ";
		cin >> segundo_color;
		cout << "1-negro\n2-cafe\n3-rojo\n4-naranja\n5-amarillo\n6-verde\n7-azul\n8-violeta\n9-gris\n10-blanco\n11-oro\n12-plata\n\n";
		cout << "Tercer color: ";
		cin >> tercer_color;
		cout << "1-oro\n2-plata\n3-sin color\n\n";
		cout << "Cuarto color: ";
		cin >> cuarto_color;
		//Primer digito
		if(primer_color == 1){
			primer_digito = NEGRO_NUM * 10;
		} else if (primer_color == 2){
			primer_digito = CAFE_NUM * 10;
		} else if (primer_color == 3){
			primer_digito = ROJO_NUM * 10;
		} else if (primer_color == 4){
			primer_digito = NARANJA_NUM * 10;
		} else if (primer_color == 5){
			primer_digito = AMARILLO_NUM * 10;
		} else if (primer_color == 6){
			primer_digito = VERDE_NUM * 10;
		} else if (primer_color == 7){
			primer_digito = AZUL_NUM * 10;
		} else if (primer_color == 8){
			primer_digito = VIOLETA_NUM * 10;
		} else if (primer_color == 9){
			primer_digito = GRIS_NUM * 10;
		} else if (primer_color == 10){
			primer_digito = BLANCO_NUM * 10;
		}
		//Segundo digito
		if(segundo_color == 1){
			segundo_digito = NEGRO_NUM;
		} else if (segundo_color == 2){
			segundo_digito = CAFE_NUM;
		} else if (segundo_color == 3){
			segundo_digito = ROJO_NUM;
		} else if (segundo_color == 4){
			segundo_digito = NARANJA_NUM;
		} else if (segundo_color == 5){
			segundo_digito = AMARILLO_NUM;
		} else if (segundo_color == 6){
			segundo_digito = VERDE_NUM;
		} else if (segundo_color == 7){
			segundo_digito = AZUL_NUM;
		} else if (segundo_color == 8){
			segundo_digito = VIOLETA_NUM;
		} else if (segundo_color == 9){
			segundo_digito = GRIS_NUM;
		} else if (segundo_color == 10){
			segundo_digito = BLANCO_NUM;
		}
		//Tercer digito multiplicador
		if(tercer_color == 1){
			tercer_digito = NEGRO_MULTI;
		} else if (tercer_color == 2){
			tercer_digito = CAFE_MULTI;
		} else if (tercer_color == 3){
			tercer_digito = ROJO_MULTI;
		} else if (tercer_color == 4){
			tercer_digito = NARANJA_MULTI;
		} else if (tercer_color == 5){
			tercer_digito = AMARILLO_MULTI;
		} else if (tercer_color == 6){
			tercer_digito = VERDE_MULTI;
		} else if (tercer_color == 7){
			tercer_digito = AZUL_MULTI;
		} else if (tercer_color == 8){
			tercer_digito = VIOLETA_MULTI;
		} else if (tercer_color == 9){
			tercer_digito = GRIS_NUM;
		} else if (tercer_color == 10){
			tercer_digito = BLANCO_MULTI;
		} else if (tercer_color == 11){
			tercer_digito = ORO_MULTI;
		} else if (tercer_color == 12){
			tercer_digito = PLATA_MULTI;
		}
		
		if(cuarto_color == 1){
			cuarto_digito = ORO_TOLER;
		} else if(cuarto_color == 2){
			cuarto_digito = PLATA_TOLER;
		} else if(cuarto_color == 3){
			cuarto_digito = SIN_COLOR_TOLER;
		} else {
			cuarto_digito = 0;
		}
		
		resistencia = ((primer_digito + segundo_digito) * tercer_digito)/1000.00;
		
		cout << "La resistencia es de " << resistencia << " Kohms" << endl;
		cout << "La tolerancia es de " << cuarto_digito << " % = +/-" << resistencia*(cuarto_digito/100.00) << " Kohms";
	}
	
	return 0;
}