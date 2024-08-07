#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float diagonalMaiorLosango;
	float diagonalMenorLosango;
	float areaLosango;
	
	printf("Valor da diagonal maior: ");
	scanf("%f", &diagonalMaiorLosango);
	printf("Valor da diagonal menor: ");
	scanf("%f", &diagonalMenorLosango);
	
	areaLosango = (diagonalMaiorLosango * diagonalMenorLosango) / 2;
	
	printf("Area = %.2f\n", areaLosango);
	
	return 0;
	
}
