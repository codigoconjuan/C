/*
 ============================================================================
 Name        : 04.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Medida de datos
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Memoria de cada tipo");
	puts ("---------\n");

	// medida de enteros

	printf("Medida de un char :						%lu byte\n", sizeof(char));
	printf("Medida de un unsigned char :						%lu byte\n", sizeof(unsigned char));
	printf("Medida de un signed char :						%lu byte\n", sizeof(signed char));
	printf("Medida de un int :						%lu byte\n", sizeof(int));
	printf("Medida de un unsigned int :						%lu byte\n", sizeof(unsigned int));
	printf("Medida de un short :						%lu byte\n", sizeof(short));
	printf("Medida de un unsigned short :						%lu byte\n", sizeof(unsigned short));
	printf("Medida de un long :						%lu byte\n", sizeof(long));
	printf("Medida de un unsigned long :						%lu byte\n", sizeof(unsigned long));

	//medida de un void
	printf("Medida de un void :						%lu byte\n", sizeof(void));

}
