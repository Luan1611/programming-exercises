#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numero;
		
	printf("Entre com um numero: ");
	scanf("%d", &numero);
	
	numero%2 == 0 ? printf("O numero %d e par.", numero) : printf("O numero %d e impar.", numero);
	
	//prof usou:
	//printf("O numero %d e %s", numero, numero%2 == 0 ? "par.": "impar.");
	
	//outra alternativa (com if e else)
	/*if (numero%2 == 0) {
		printf("O numero %d e par.", numero);
	} else {
		printf("O numero %d e impar.", numero);
	}*/
	
	return 0;
	
}
