#include <stdio.h>
#define PI 3.14

float CARectangulo(float longitud, float altura);
float CPRectangulo(float longitud, float altura);
float CACirculo(float radio);
float CPCirculo(float radio);
void ImprimirResultados(int a, float area, float perimetro);


int main(void) {
	int a;
	float longitud, altura, radio;
	do{
		printf("Ingrese la figura que desea calcular: \n1: Rectangulo\n2: Circulo\n");
		scanf("%d", &a);
		
		if(a != 1 && a != 2){
			printf("Opcion invalida Intente de nuevo\n");}
		
	}while(a != 1 && a != 2);
	
	switch (a){
	case 1:
		printf("ingrese la longitud del rectangulo: \n");
		scanf("%f", &longitud);
		printf("ingrese la altura del rectangulo: \n");
		scanf("%f", &altura);
		
		CARectangulo(longitud, altura);
		CPRectangulo(longitud, altura);
		float area = CARectangulo(longitud, altura);
		float perimetro = CPRectangulo(longitud, altura);
		
		ImprimirResultados(a, area, perimetro);
		break;
	case 2:
		printf("ingrese el radio del circulo:\n");
		scanf("%f", &radio);
		CACirculo(radio);
		CPCirculo(radio);
		float areac = CACirculo(radio);
		float perimetroc = CPCirculo(radio);
		
		ImprimirResultados(a, areac, perimetroc);
		break;
	}
	
	return 0;
}
float CARectangulo(float longitud, float altura){
	float area = longitud * altura;
	
	return area;
}

float CPRectangulo(float longitud, float altura){
	float perimetro = 2 * (longitud + altura);
	
	return perimetro;
}
	
float CACirculo(float radio){
	float area = PI * radio * radio;
	
	return area;
}
	
float CPCirculo(float radio){
	float perimetro = 2 * PI * radio;
	
	return perimetro;
}
void ImprimirResultados(int a, float area, float perimetro){
	
	if(a == 1){
		printf("area del rectangulo : %0.2f\nperimetro del rectangulo: %0.2f", area, perimetro);
	}else{
		printf("area del circulo: %0.2f\nperimetro del circulo: %0.2f", area, perimetro);
	}
}
