#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numeroUm;
	int numeroDois;
	int mediaAritmetica;
	
	printf("Primeiro numero: ");
	scanf("%d", &numeroUm);
	printf("Segundo numero: ");
	scanf("%d", &numeroDois);
	
	mediaAritmetica = (numeroUm + numeroDois) / 2;
	
	printf("Media aritmetica: %d", mediaAritmetica);
	
	return 0;
	
}
