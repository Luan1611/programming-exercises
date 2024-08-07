#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int alturaRetangulo;
	int larguraRetangulo;
	int areaRetangulo;
	int perimetroRetangulo;
	
	printf("Valor da largura: ");
	scanf("%d", &larguraRetangulo);
	printf("Valor da altura: ");
	scanf("%d", &alturaRetangulo);
	
	areaRetangulo = larguraRetangulo * alturaRetangulo;
	perimetroRetangulo = 2 * (larguraRetangulo + alturaRetangulo);
	
	printf("Perimetro =  %d\n", perimetroRetangulo);
	printf("Area = %d\n", areaRetangulo);
	
	return 0;
	
}
