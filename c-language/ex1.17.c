#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float baseMaiorTrapezio;
	float baseMenorTrapezio;
	float alturaTrapezio;
	float areaTrapezio;
	
	printf("Valor da base maior: ");
	scanf("%f", &baseMaiorTrapezio);
	printf("Valor da base menor: ");
	scanf("%f", &baseMenorTrapezio);
	printf("Valor da altura: ");
	scanf("%f", &alturaTrapezio);
	
	areaTrapezio = (baseMaiorTrapezio + baseMenorTrapezio) * alturaTrapezio / 2;
	
	printf("Area = %.2f\n", areaTrapezio);
		
	return 0;
	
}
