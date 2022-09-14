/*
 ============================================================================
 Name        : ejercicioPractica.c
 Author      : tomas san miguel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define LEN 5    // este es un macro que sirve para no escribir numeros por todos lados
int main()
{
    setbuf(stdout,NULL);
    int legajo[LEN];
    int nota[LEN];
    int notaMaxima;
    int legajoMaxima;

    // Primero siempre inizilizamos el array
    for (int i = 0; i < LEN; i++)
    {
        legajo[i]=0;
        nota[i]=0;
    }
    // pedimos datos
    for (int i = 0; i < LEN; i++) {
        printf("\nIngrese el numero de legajo: ");
        scanf("%d",&legajo[i]);

        printf("Ingrese nota: ");
        scanf("%d",&nota[i]);

        if(i==0 || nota[i] > notaMaxima)
        {
        	notaMaxima=nota[i];
        	legajoMaxima=legajo[i];
        }

    }
    // mostramos cada legajo
    for (int i = 0; i < LEN; i++) {
        printf("\nEn la posicion %d el numero de legajo es: %d",i,legajo[i]);

    }

    printf("\nLa nota maxima fue: %d y su legajo : %d",notaMaxima, legajoMaxima);




    return 0;
}

