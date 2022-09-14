/*
 ============================================================================
 Name        : ejercicio.c
 Author      : tomas san miguel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida. Mostrar:
a) El promedio de los positivos y su mínimo.
b) El promedio de los negativos y su máximo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int respuesta="si";
	int numeroIngresado;
	int contadorPositivos=0;
	int acumuladorPositivo=0;
	float promedioPositivos;
	int numeroMinimo;
	int numeroMaximo;
	while(respuesta=="si")
	{
		printf("ingrese un numero");
		scanf("%d" , &numeroIngresado);
		if(numeroIngresado >= 0 )
		{
			contadorPositivos++;
		    acumuladorPositivo= acumuladorPositivo + numeroIngresado;
		}

		printf("desea continuar?si/no");
	}

	promedioPositivos= acumuladorPositivo/contadorPositivos;
	printf("el promedio de los positivos es:%.2f");

	return EXIT_SUCCESS;
}
