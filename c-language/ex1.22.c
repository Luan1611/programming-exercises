#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float valorProduto;
	float precoDeVenda;
	
	printf("Valor do produto: ");
	scanf("%f", &valorProduto);
	
	precoDeVenda = valorProduto * 0.91;
	
	printf("Preco de venda com 9%% de desconto: %.2f", precoDeVenda);
	
	return 0;
	
}
