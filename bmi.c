#include <stdio.h>

int main (void){
	float peso, altura, bmi;
	
		do {
		printf(" Ingrese su peso en Kg: ");
		scanf("%f", &peso);
		
		if (peso <= 0) {
			printf(" Error: El peso debe ser un numero positivo. Intente de nuevo.\n\n");
		}
	} while (peso <= 0);
	
	
	do {
		printf("\n Ingrese su altura en metros: ");
		scanf("%f", &altura);
		
		if (altura <= 0) {
			printf(" Error: La altura debe ser un numero positivo. Intente de nuevo.\n\n");
		}
	} while (altura <= 0);
	
	
	bmi = peso / (altura * altura);
	
	printf("\n Su indice de masa corporal es = %.1f\n", bmi);
	
	printf("\n Indice\t\tCondicion\n");
	printf("-----------------------------\n");
	printf(" <18.5\t\tBajo peso\n");
	printf(" 18.5 a 24.9\tNormal\n");
	printf(" 25.0 a 29.9\tSobrepeso\n");
	printf(" >=30\t\tObesidad\n");
	
	if (bmi >= 30) {
		printf("\nTe encontras en obesidad\n");
	} else if (bmi >= 25) {
		printf("\nTe encontras en sobrepeso\n");
	} else if (bmi >= 18.5) {
		printf("\nTe encontras en peso normal\n"); 
	} else {
		printf("\nTe encontras bajo de peso\n");
	}
	
	return 0;
}
