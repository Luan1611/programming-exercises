#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int baseTriangulo;
	int alturaTriangulo;
	int areaTriangulo;
	
	printf("Valor da base: ");
	scanf("%d", &baseTriangulo);
	printf("Valor da altura: ");
	scanf("%d", &alturaTriangulo);
	
	areaTriangulo = (baseTriangulo * alturaTriangulo) / 2;
	
	printf("Area = %d\n", areaTriangulo);
	
	return 0;
	
}
