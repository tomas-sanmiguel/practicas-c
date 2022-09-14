/*
 ============================================================================
 Name        : ejercicio.c
 Author      : tomas san miguel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
caso de que no exista también informarlo.
Ejemplo:
1 5 3 el 3 es del medio
5 1 5 no hay número del medio
3 5 1 el 3 es del medio
3 1 5 el 3 es del medio
5 3 1 el 3 es del medio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numero1;
	int numero2;
	int numero3;

	printf("ingrese el primer numero");
	scanf("%d" , &numero1);
	printf("ingrese el segundo numero");
	scanf("%d" , &numero2);
	printf("ingrese el tercer numero");
	scanf("%d" , &numero3);

	if((numero1>numero2 && numero1<numero3)||(numero1<numero2 && numero1>numero3))
	{
		printf("el numero del medio es el primero");
	}
	else if ((numero2>numero1 && numero2<numero3)||(numero2<numero1 && numero2>numero3))
	{
		printf("el segundo numero ingresado es el del medio");
	}
	else if((numero3>numero1 && numero3<numero2)|(numero3<numero1 && numero3>numero2))
	{
		printf("el tercer numero ingresado es el del medio");
	}
	else
	{
		printf("no hay numero intermedio");
	}



	return EXIT_SUCCESS;
}
