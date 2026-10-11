#include <stdio.h>
#define TAM 5


int main(void) {
	int codigo;
	int code[TAM] = {0};
	float precio[TAM] = {0};
	int code_max = 0, code_min = 0;
	
	printf("ingrese 5 productos, con su codigo y precio:\n");
	
	for(int i = 0; i < TAM; i++){
		do{
			printf("ingrese codigo:");
			scanf("%d", &codigo);
			if(codigo < 0 || codigo > 999999999){
				printf("error, codigo debe estar entre 0 - 999999999\n");
			}else{
				code[i] = codigo;
			}
			
		}while(codigo < 0 || codigo > 999999999);
		
		do{
			printf("ingrese el precio:");
			scanf("%f", &precio[i]);
			if(precio[i] <= 0){
				printf("el precio debe ser mayor a cero");}
		}while(precio[i] <= 0);
	}
	printf("\nCodigo \t- Precio\n\n");
	
	for(int i = 0; i < TAM; i++){
		printf("%d   \t %.2f\n",code[i] ,precio[i]);
	}
	
	for(int i=0; i<TAM;i++){
		if(precio[i] > precio[code_max]){
			code_max = i;
		}
		if(precio[i] < precio[code_min]){
			code_min = i;
		}
	}
	printf("\n");
	printf("mas caro:[%d] %.2f\n",code[code_max], precio[code_max]);
	printf("mas barato:[%d] %.2f",code[code_min], precio[code_min]);
	return 0;
}
