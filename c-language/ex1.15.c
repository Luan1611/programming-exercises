#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float larguraRetangulo;
	float alturaRetangulo;
	
	float perimetroRetangulo;
	float areaRetangulo;
	
	printf("Valor da largura: ");
	scanf("%f", &larguraRetangulo);
	printf("Valor da altura: ");
	scanf("%f", &alturaRetangulo);
	
	perimetroRetangulo = 2 * (larguraRetangulo + alturaRetangulo);
	areaRetangulo = larguraRetangulo * alturaRetangulo;
	
	printf("Perimetro = %.2f\n", perimetroRetangulo);
	printf("Area = %.2f\n", areaRetangulo);
	
	return 0;
	
}
