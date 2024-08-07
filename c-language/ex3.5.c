#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int nro;
	
	printf("Forneca um numero maior ou igual a zero: ");
	scanf("%d", &nro);
	
	if (nro >= 0) {
		
		for (int i = 0; i <= nro; i++) {
			
			printf("%d ", i);
			
		}
		
	} else {
		
		printf("Valor incorreto (negativo)");
		
	}
	
	return 0;
	
}
