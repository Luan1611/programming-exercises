#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float raioCirculo;
	float diametroCirculo;
	float perimetroCirculo;
	float areaCirculo;
	float pi = 3.141592;
	
	printf("Valor do raio do circulo: ");
	scanf("%f", &raioCirculo);
	
	diametroCirculo = 2 * raioCirculo;
	perimetroCirculo = 2 * pi * raioCirculo;
	areaCirculo = pi * (raioCirculo * raioCirculo);
	
	printf("Diametro = %.2f\n", diametroCirculo);
	printf("Circunferencia = %.2f\n", perimetroCirculo);
	printf("Area = %.2f\n", areaCirculo);
	
	return 0;
	
}
