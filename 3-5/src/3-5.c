/*
 ============================================================================
 Name        : 3-5.c
 Author      : tomas san miguel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//prototipo
int restar1(int primerNumero,int segundoNumero);

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	int resultado;

	printf("ingrese un numero");
	scanf("%d" , &numero1);

	printf("ingrese un segundo numero");
	scanf("%d" , &numero2);

	resultado=restar1( numero1 , numero2);//invoca la funcion
	printf("la resta de los numeros ingresados es: %d" , resultado);


	return EXIT_SUCCESS;
}
int restar1(int primerNumero,int segundoNumero)
{
	int resultado;

	resultado= primerNumero - segundoNumero;

	return resultado;
}
