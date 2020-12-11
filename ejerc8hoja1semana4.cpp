/*
8 Escribir un programa en C++ que reciba como datos de entrada los goles del equipo local
(gl) y los goles del equipo visitante (gv), imprima una cadena de caracteres indicando qué
equipo ha ganado (resultados posibles: “local”, “visitante”, “empate”).
Ejemplo:
Ingrese la cantidad de goles del equipo local: 7
Ingrese la cantidad de goles del equipo visitante: 4
Ganó el equipo local


*/


#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<math.h>

using namespace std;



int main()
{
	int goleslocal;
	int golesvis;
		
	cout << "goles equipo local "; cin>>goleslocal;
	cout << "goles equipo visitante: "; cin >>golesvis;

	
	if (goleslocal < 0 || golesvis < 0)
	{
		cout << "error de ingreso goles! "; exit(0); _getch();
	}
	
	else 
		if (goleslocal>golesvis)
	
		cout << "gano el equipo local" ;
	
		else 
			if (goleslocal<golesvis)
			
				cout << "gano el equipo visitante";
			else
	
		cout << "empate" ;
		
	
	_getch();

}









