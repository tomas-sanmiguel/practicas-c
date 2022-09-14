/*
 ============================================================================
 Name        : arrays.c
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
	float flotantes[5];
	int enteros[5];
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;


	for(int i ; i<5 ; i++){
		printf("ingrese el primer numero");
			scanf("%d" , &num1);
			printf("ingrese el segundo numero");
			scanf("%d" , &num2);
			printf("ingrese el tercer numero");
			scanf("%d" , &num3);
			printf("ingrese un cuarto numero");
			scanf("%d" , num4);
			printf("ingrese el ultimo numero");
			scanf("%d" , num5);
		printf("Posicion %d -> %d" , i , enteros[i]);
	}
	    enteros[0]=num1;
		enteros[1]=num2;
	    enteros[2]=num3;
	    enteros[3]=num4;
	    enteros[4]=num5;
	return 0;
}
