#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int nroUm;
	int nroDois;
	int nroTres;
	
	printf("N1: ");
	scanf("%d", &nroUm);
	printf("N2: ");
	scanf("%d", &nroDois);
	printf("N3: ");
	scanf("%d", &nroTres);
	
	if (nroUm >= nroDois && nroDois >= nroTres) {
		
		printf("%d <= %d <= %d", nroTres, nroDois, nroUm);
		
	}
	
	if (nroUm >= nroDois && nroDois < nroTres) {
	
		printf("%d <= %d <= %d", nroDois, nroUm, nroTres);
	
	}
	
	if (nroUm < nroDois && nroDois >= nroTres){
	
		printf("%d <= %d <= %d", nroUm, nroTres, nroDois);
	
	}
	
	if (nroUm < nroDois && nroDois < nroTres) {
		
		printf("%d <= %d <= %d", nroUm, nroDois, nroTres);
		
	}
	
	return 0;
	
}
