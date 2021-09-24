/*
 ============================================================================
 Name        : clase_07.c
 Author      : Juan Manuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 no esta bien usar el sizeof de la cadena, ya que da la posicion inicial del array, nos da un solo numero que es la posicion de memoria

 el fgets devuelve como parte de la cadena el ENTER presionado!!!

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn_biblioteca.h"
#define LARGO_CADENA 8

int main(void) {
	setbuf(stdout, NULL);

	//char cadena[LARGO_CADENA];
	//int i;


	/*if(pedirTextoUsuario(cadena, sizeof(cadena), 3, "Ingresa tu nombre\n", "Error\n")==0) // tener en cuenta como tomamos el tamaño (len) con sizeof(), no usamos strlen, ya que eso mediria la basura de la cadena
	{
		printf("ingresaste: %s \n", cadena);

		for(i=0; i<LARGO_CADENA;i++)
		{
			printf(" %d) %c - %d", i, cadena[i], cadena[i]);
		}
	}*/

	int numero;

	if(pedirIntAUsuario(&numero, 1, 120, 2, "Ingrese edad\n", "Error")==0)
	{
		printf("Tu edad es > %d", numero);
	}
	else
	{
		printf("Error!!!");
	}





	return EXIT_SUCCESS;
}



