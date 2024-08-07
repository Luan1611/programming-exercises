#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int idadeHomem1;
	int idadeHomem2;
	int idadeMulher1;
	int idadeMulher2;
	int somaIdades;
	int produtoIdades;
	
	printf("Idade Homem 1: ");
	scanf("%d", &idadeHomem1);
	printf("Idade Homem 2: ");
	scanf("%d", &idadeHomem2);
	printf("Idade Mulher 1: ");
	scanf("%d", &idadeMulher1);
	printf("Idade Mulher 2: ");
	scanf("%d", &idadeMulher2);
	
	if (idadeHomem1 >= idadeHomem2) {
		
		if (idadeMulher1 <= idadeMulher2) {
			
			somaIdades = idadeHomem1 + idadeMulher1;
			produtoIdades = idadeHomem2 * idadeMulher2;
			
		} else {
			
			somaIdades = idadeHomem1 + idadeMulher2;
			produtoIdades = idadeHomem2 * idadeMulher1;
			
		}
		
	} else {
		
		if (idadeMulher1 <= idadeMulher2) {
			
			somaIdades = idadeHomem2 + idadeMulher1;
			produtoIdades = idadeHomem1 * idadeMulher2;
			
		} else {
			
			somaIdades = idadeHomem2 + idadeMulher2;
			produtoIdades = idadeHomem1 * idadeMulher1;
			
		}
		
	}
	
	printf("Idade homem mais velho + idade mulher mais nova: %d\n", somaIdades);
	printf("Idade homem mais novo * idade mulher mais velha: %d\n", produtoIdades);
	
	return 0;
	
}
