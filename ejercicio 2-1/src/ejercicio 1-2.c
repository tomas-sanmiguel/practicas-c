/*
 ============================================================================
 Name        : ejercicio.c
 Author      : tomas san miguel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int contador=0;
	int numeroIngresado;

	int acumulador=0;
	float promedio;

	for(contador =0 ; contador<7 ; contador++ )
	{
		printf("ingrerse un numero negativo y distinto de 0");
		scanf("%d" , &numeroIngresado );
		while(numeroIngresado >= 0)
		{
			printf("ERROR, ingrese nuevamente un numero negativo distintop a cero");
			scanf("%d" , &numeroIngresado);
		}
		acumulador=acumulador + numeroIngresado;

	}
	promedio =(float) acumulador/contador;
	printf("el promedio de los numero es:%.2f " , promedio);

	return EXIT_SUCCESS;
}
