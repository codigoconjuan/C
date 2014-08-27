/*
 ============================================================================
 Name        : 06.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Booleans
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// standar de C99
// bool verdadero = 1 falso = 0


// una alternativa diferente es crear un nuevo tipo

typedef int Bool;
#define True 1
#define False 0

int main(void) {
	Bool aBoolen;
	aBoolen = True;
	printf("The value of aBoolen is %d\n",aBoolen);
	return EXIT_SUCCESS;
}
