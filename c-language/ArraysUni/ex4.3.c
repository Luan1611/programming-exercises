#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float array[5];
	int tamanhoArray = sizeof(array) / sizeof(array[0]);
	float somatorio = 0;
	float produtorio = 1;
	
	// Entrada dos 5 numeros
	for (int i = 0; i < tamanhoArray; i++) {
		printf("array[%d]: ", i);
		scanf("%f", &array[i]);
	}
	
	// Calculo do somatorio e do produtorio
	for (int j = 0; j < tamanhoArray; j++) {
		somatorio += array[j];
		produtorio = produtorio * (array[j]);
	}
	
	// Saida
	printf("Somatorio: %.2f\n", somatorio);
	printf("Produtorio: %.2f\n", produtorio);
	
	return 0;
	
}
