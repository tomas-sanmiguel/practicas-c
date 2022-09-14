/*
 ============================================================================
 Name        : ejercicio.c
 Author      : tomas san miguel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
Ejemplo: Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el
segundo: 9
============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numero1;
	int numero2;
	int numero3;

	printf("ingrese un primer numero ");
	scanf("%d" , &numero1);
	printf("ingrese el segundo numero");
	scanf("%d" , &numero2);
	printf("ingrese el tercer numero ");
	scanf("%d" , &numero3);

	if(numero1>numero2 && numero1>numero3)
	{
		printf("el numero mayor es el primer numero");
	}
	else if (numero2>numero3)
	{
		printf("el segundo numero ingresado es el mayor");
	}
	else
	{
		printf("el tercer numero ingresado es el mayor");
	}


	return EXIT_SUCCESS;
}
