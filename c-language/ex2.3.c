#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int nroUm;
	int nroDois;
	
	printf("Entre com um numero: ");
	scanf("%d", &nroUm);
	printf("Entre com outro numero: ");
	scanf("%d", &nroDois);
	
	if (nroUm >= nroDois) {
		
		printf("Ordem decrescente: %d >= %d", nroUm, nroDois);
		
	} else {
		
		printf("Ordem decrescente: %d => %d", nroDois, nroUm);
		
	}
	
	return 0;
	
}
