/*
 * biblioteca.c
 *
 *  Created on: 8 sep. 2022
 *      Author: marlb
 */
#include <stdio.h>
#include <stdlib.h>
int primerOp(){
	int retorno;
	printf("\n1)Iniciar\n"
			"2)Procesar \n"
			"3) Finalizar \n"
			"4) Salir \n");
	printf("ingrese una opcion");
	scanf("%d" , &retorno);
		return retorno;
}
char salir()
{
	char retorno;
	printf("Desea salir?s/n");
	fflush(stdin);
	scanf("%c" , &retorno);
	return retorno;
}
