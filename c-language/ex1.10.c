#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int baseMaiorTrapezio;
	int baseMenorTrapezio;
	int alturaTrapezio;
	int areaTrapezio;
	
	printf("Valor da base maior: ");
	scanf("%d", &baseMaiorTrapezio);
	printf("Valor da base menor: ");
	scanf("%d", &baseMenorTrapezio);
	printf("Valor da altura: ");
	scanf("%d", &alturaTrapezio);
	
	areaTrapezio = ((baseMaiorTrapezio + baseMenorTrapezio) * alturaTrapezio) / 2;
	
	printf("Area = %d", areaTrapezio);
	
	return 0;
	
}
