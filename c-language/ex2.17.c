#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numero;
	
	printf("Entre com um numero: ");
	scanf("%d", &numero);
	
	switch(numero) {
	
	case 2:
		printf("O valor fornecido foi %d.", numero);
		break;
		
	case 4:
		printf("O valor fornecido foi %d.", numero);
		break;
	
	case 6:
		printf("O valor fornecido foi %d.", numero);
		break;
	
	case 8:
		printf("O valor fornecido foi %d.", numero);
		break;
		
	default:
		printf("Valor invalido.\n");
	
	}
	
	return 0;
	
}
