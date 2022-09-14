/*
 ============================================================================
 Name        : ejercicio.c
 Author      : tomas san miguel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar
 "Debe Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar
 "Debe Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar
"Debe Procesar antes de Finalizar" y no deja continuar
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main(void)
{
    setbuf(stdout,NULL);
	int ret;
	int respuesta='n';
	int flagIniciar=0;
	int flagProcesado=0;
    while(respuesta=='n')
    {
	    ret=primerOp();

	    switch(ret)
	    {
	    case 1:
	    	printf("Usted ha inicializado");
	    	flagIniciar=1;
	          break;
	    case 2:
	    	if(flagIniciar==0){
	    		printf("Debe iniciar antes de procesar");
	    	}
	    	else {
	    	printf("Usted ha procesado");
	    	flagProcesado=1;
	    	}
	    	break;
	    case 3:
	    	if (flagIniciar==0){
	    		printf("debe iniciar antes de finalizar");
	    	}
	    	else if(flagProcesado==0){
	    	   printf("Debe procesar antes de finalizar");
	    	}
	    	else{
	    		printf("Usted ha finalizado");
	    	}break;

	    case 4:
	    	printf("usted ha seleccionado salir");
	    	respuesta=salir();
	    	break;



	    }
    }

	return 0;
}





