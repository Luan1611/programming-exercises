#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numero;
	int sucessorDoNumero;
	int antecessorDoNumero;
	
	printf("Forneca um numero inteiro: ");
	scanf("%d", &numero);
	
	sucessorDoNumero = numero + 1; //é diferente de eu escrever numero++
	antecessorDoNumero = numero - 1; //é diferente de eu escrever numero--
	
	printf("Sucessor de %d: %d\n", numero,sucessorDoNumero);
	printf("Antecessor de %d: %d\n", numero, antecessorDoNumero);
	
	return 0;
	
}
