/*
 ============================================================================
 Name        : 11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Assignment Statements
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// se tiene capacidades de calculadora

	// Declarar variables e inicializar

	double originalPrice = 0.0;
	double tax = 		  0.0;
	double discount = 	  0.0;
	double specialPrice = 0.0;

	printf("Coloque el precio original: ");
	scanf("%lf", &originalPrice);

	printf("Coloque los impuestos: ");
	scanf("%lf", &tax);

	printf("Coloque el porcentaje de descuento: ");
	scanf("%lf", &discount);

	double afterTax = originalPrice*(1.0+tax/100.0);
	double theDiscount = originalPrice*(discount/100.0);
	specialPrice = afterTax - theDiscount;

	printf("\nOur rules:\n 1. Tax is applied first.\n 2. Discount is applied to the original price\n\n");

	printf("El Precio original es:  $%.2lf\n",originalPrice);
	printf("El precio después de impuestos es: $%.2lf\n",afterTax);
	printf("El descuento es:  $%.2lf\n",theDiscount);
	printf("El precio es:  $%.2lf\n",specialPrice);

	return EXIT_SUCCESS;
}
