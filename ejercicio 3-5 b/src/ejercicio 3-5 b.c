/*
 ============================================================================
 Name        : ejercicio.c
 Author      : tomas san miguel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Restar2();
int main(void) {
	setbuf(stdout, NULL);
	int num1;
	int num2;
	int resultado;

	printf("ingrese un numero");
	scanf("%d", &num1);

	printf("ingrese un segundo numero");
	scanf("%d", &num2);

	resultado= Restar2 (num1 , num2);
     printf("el resultado es: %d" , resultado);



	return EXIT_SUCCESS;
}
int Restar2()
{
	int numero1;
	int numero2;
	int resultado;
	resultado=numero1+numero2;
	return 0;
}


