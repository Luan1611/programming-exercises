#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float salarioLiquido;
	float valorPorAula;
	float quantidadeAulas;
	float porcentagemDesconto;
	
	printf("Valor da hora/aula: ");
	scanf("%f", &valorPorAula);
	printf("Quantidade de aulas: ");
	scanf("%f", &quantidadeAulas);
	printf("Porcentagem de desconto do INSS: ");
	scanf("%f", &porcentagemDesconto);
	
	salarioLiquido = (valorPorAula * quantidadeAulas ) * (1 - (porcentagemDesconto / 100));
	
	printf("Salario Liquido: %.2f", salarioLiquido);
	
	return 0;
	
}
