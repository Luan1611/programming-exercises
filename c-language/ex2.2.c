#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numeroUm;
	int numeroDois;
	
	printf("Entre com um numero: ");
	scanf("%d", &numeroUm);
	printf("Entre com outro numero: ");
	scanf("%d", &numeroDois);
	
	//primeira forma de resolver
	/*numeroUm >= numeroDois ? printf("Ordem crescente: %d <= %d", numeroDois, numeroUm) :
	 printf("Ordem crescente: %d <= %d", numeroUm, numeroDois);*/
	
	//segunda forma de resolver (não funcionou, acho que porque retorna 2 argumentos por verificação
	//printf("Ordem crescente: %d <= %d", numeroUm >= numeroDois? numeroDois, numeroUm : numeroUm, numeroDois);
	
	//terceira forma de resolver
	/*if (numeroUm >= numeroDois) {
		printf("Ordem crescente: %d <= %d", numeroDois, numeroUm);
	} else {
		printf("Ordem crescente: %d <= %d", numeroUm, numeroDois);
	}*/
	
	//quarta forma de resolver (não funciona corretamente)
	//printf(numeroUm >= numeroDois? "Ordem crescente: %d <= %d", numeroDois, numeroUm : "Ordem crescente: %d <= %d", numeroUm, numeroDois);
	
	//quinta forma de resolver
	printf("Ordem crescente: %d <= %d", numeroUm >= numeroDois? numeroDois : numeroUm, 
	numeroUm >= numeroDois?  numeroUm : numeroDois);
	
	return 0;
	
}
