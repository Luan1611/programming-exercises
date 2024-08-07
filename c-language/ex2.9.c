#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int qtdeLadosPoligonoRegular;
	float medidaDoLado;

	printf("Entre com a quantidade de lados: ");
	scanf("%d", &qtdeLadosPoligonoRegular);
	printf("Entre com a medida do lado: ");
	scanf("%f", &medidaDoLado);
	
	if (qtdeLadosPoligonoRegular == 3) {
		
		printf("TRIANGULO de perimetro %.2f", medidaDoLado * 3);
	
	} else {
		
		if (qtdeLadosPoligonoRegular == 4) {
			
			printf("QUADRADO de area %.2f", medidaDoLado * medidaDoLado);
			
		} else {
			
			if (qtdeLadosPoligonoRegular == 5) {
				
			printf("PENTAGONO");
			
			} else {
			
			printf("Poligono nao identificado");
			
			}
			
		}
		
	}
	
	return 0;
	
}
