#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float ladoQuadrado;
	float areaQuadrado;
	float perimetroQuadrado;
	
	printf("Valor do lado: ");
	scanf("%f", &ladoQuadrado);
	
	areaQuadrado = ladoQuadrado * ladoQuadrado;
	perimetroQuadrado = 4 * ladoQuadrado;
	
	printf("Perimetro = %.2f\n", perimetroQuadrado);
	printf("Area = %.2f\n", areaQuadrado);
	
	return 0;
	
}
