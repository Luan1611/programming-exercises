#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float baseTriangulo;
	float alturaTriangulo;
	
	float areaTriangulo;
	
	printf("Valor da base: ");
	scanf("%f", &baseTriangulo);
	printf("Valor da altura: ");
	scanf("%f", &alturaTriangulo);
	
	areaTriangulo = (baseTriangulo * alturaTriangulo) / 2;
	
	printf("Area = %.2f\n", areaTriangulo);
	
	return 0;
	
}
