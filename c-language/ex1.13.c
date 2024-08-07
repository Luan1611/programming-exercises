#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float primeiroNumero;
	float segundoNumero;
	
	float soma;
	float subtracao;
	float multiplicacao;
	float divisao;
	
	//entrada
	printf("Primeiro numero: ");
	scanf("%f", &primeiroNumero);
	printf("Segundo numero: ");
	scanf("%f", &segundoNumero);
	
	//processamento
	soma = primeiroNumero + segundoNumero;
	subtracao = primeiroNumero - segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	
	//saida
	printf("%.2f + %.2f = %.2f\n", primeiroNumero, segundoNumero, soma);
	printf("%.2f - %.2f = %.2f\n", primeiroNumero, segundoNumero, subtracao);
	printf("%.2f * %.2f = %.2f\n", primeiroNumero, segundoNumero, multiplicacao);
	printf("%.2f / %.2f = %.2f\n", primeiroNumero, segundoNumero, divisao);
	
	return 0;
	
}
