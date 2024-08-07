#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int primeiroNro;
	int segundoNro;
	
	int adicao;
	int subtracao;
	int multiplicacao;
	int divisao;
	
	//entrada
	printf("Primeiro numero: ");
	scanf("%d", &primeiroNro);
	
	printf("Segundo numero: ");
	scanf("%d", &segundoNro);
	
	//processamento
	adicao = primeiroNro + segundoNro;
	subtracao = primeiroNro - segundoNro;
	multiplicacao = primeiroNro * segundoNro;
	divisao = primeiroNro / segundoNro;
		
	//saída
	printf("%d + %d = %d\n", primeiroNro, segundoNro, adicao);
	printf("%d - %d = %d\n", primeiroNro, segundoNro, subtracao);
	printf("%d * %d = %d\n", primeiroNro, segundoNro, multiplicacao);
	printf("%d / %d = %d\n", primeiroNro, segundoNro, divisao);
	
	return 0;
	
}
