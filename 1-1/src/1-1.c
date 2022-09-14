/*
 ============================================================================
 Name        : 1-1.c
 Author      : tomas san miguel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int num1;
	int num2;
	int suma;

		printf("ingrese un numero");
		scanf("%d" , &num1);
		if(num1<-50 || num1>100){
			printf("error ingrese un numero valido");
			scanf("%d", &num1);
		}
		printf("ingrese un segundo numero");
		scanf("%d" , &num2);
		if(num2<-50 || num2>100){
			printf(" ERORR ingrese un segundo numero valido");
			scanf("%d" , &num2);
		}
		suma=num1+num2;
		printf("La suma es: %d" ,suma);


	return EXIT_SUCCESS;
}
