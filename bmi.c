#include <stdio.h>

int main (void){
	float peso, altura, bmi;
	
	printf (" Ingrese su peso en Kg: ");
	scanf ("%f", &peso);
	
	printf ("\n Ingrese su altura en metros: ");
	scanf ("%f", &altura);
	
	bmi = peso / (altura * altura) ;
	
	printf("\n Su indice de masa corporal es = %.1f\n", bmi);
	
	printf ("\n Indice\t\tCondicion\n");
	printf ("-----------------------------\n");
	printf (" <18.5\t\tBajo peso\n");
	printf (" 18.5 a 24.9\tNormal\n");
	printf (" 25.0 a 29.9\tSobrepeso\n");
	printf (" >=30\t\tObesidad\n");
	
	return 0;
}
	
