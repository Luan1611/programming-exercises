#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int diagonalMaiorLosango;
	int diagonalMenorLosango;
	int areaLosango;
	
	printf("Valor da diagonal maior: ");
	scanf("%d", &diagonalMaiorLosango);
	printf("Valor da diagonal menor: ");
	scanf("%d", &diagonalMenorLosango);
	
	areaLosango = (diagonalMaiorLosango * diagonalMenorLosango) / 2;
	
	printf("Area = %d\n", areaLosango);
		
	return 0;
	
}
