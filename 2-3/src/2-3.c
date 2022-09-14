/*
 ============================================================================
 Name        : 2-3.c
 Author      : tomas san miguel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 2-3: Usando el concepto de operadores lógicos booleanos en el condicional.
Solicitar un número al usuario e informar si el número es par o impar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	  setbuf(stdout , NULL);
	  int numero;
	  printf("ingrese un numero");
	  scanf("%d",&numero);
	  if(numero%2==0)
	  {
		  printf("el numero ingresado es par");
	  }
	  else{
		  printf("el numero ingresado es impar");
	  }
	return EXIT_SUCCESS;
}
