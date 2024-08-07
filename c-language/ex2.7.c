#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float nroUm;
	float nroDois;

	printf("Entre com um numero: ");
	scanf("%f", &nroUm);
	printf("Entre com outro numero: ");
	scanf("%f", &nroDois);
	
	if ((nroUm + nroDois) > 10) {
		
		printf("Os numeros fornecidos foram %.2f e %.2f", nroUm, nroDois);
		
	}
	
	else {
		
		printf("A subtracao entre %.2f e %.2f e igual a %.2f", nroUm, nroDois, (nroUm - nroDois));		
		
	}
	
	return 0;
	
}
