/*
 ============================================================================
 Name        : 2-4.c
 Author      : tomas san miguel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 2-4:
Ingresar 8 números enteros, distintos de cero. Mostrar:
a. El menor número ingresado.
b. De los pares el mayor número ingresado.
c. Producto de los negativos.
d. En qué lugar fue ingresado el mayor numero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroIngresado;
	int menor;
	int flagMenor=0;
	int flagMayor=0;
	int numPar;
	int productoNegativos=0;
	int iteracionDelmayor;
	int mayorNumero;

	for(int i=0;i<8;i++)
	{
		  printf("\n ingrese un numero(distinto a cero)\n");
		  scanf("%d", &numeroIngresado);
		  while(numeroIngresado==0){
			  printf("Error, ingrese un numero distinto a cereo");
			  scanf("%d", &numeroIngresado);
		  }
	  if (flagMenor==0 || numeroIngresado<menor){
		  menor=numeroIngresado;
		  flagMenor=1;
	  }
	  if((flagMayor==0 || numPar<numeroIngresado) && (numeroIngresado%2==0)){
		  numPar=numeroIngresado;
		  flagMayor=1;
	  }
	  if(numeroIngresado<0){
		  productoNegativos=productoNegativos+numeroIngresado;
	  }

	  if(mayorNumero<numeroIngresado){
		  mayorNumero=numeroIngresado;
		  iteracionDelmayor=i;
	  }
	}
	//a
       printf("el menor numero ingresado es: %d \n",menor);
    //b
       printf("el numero par maximo es: %d \n" ,numPar);
    //c
       printf("el producto de los negativos es: %d \n" , productoNegativos);

       printf("el mayor numero es :%d y se encuentra en la posicion: %d" ,mayorNumero , iteracionDelmayor);

	return EXIT_SUCCESS;
}












