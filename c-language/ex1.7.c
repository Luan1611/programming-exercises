#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int medidaLadoDoQuadrado;
	int areaDoQuadrado;
	int perimetroDoQuadrado;
	
	printf("Valor do lado: ");
	scanf("%d", &medidaLadoDoQuadrado);
	
	areaDoQuadrado = medidaLadoDoQuadrado * medidaLadoDoQuadrado;
	perimetroDoQuadrado = 4 * medidaLadoDoQuadrado;
	
	printf("Perimetro = %d\n", perimetroDoQuadrado);
	printf("Area = %d\n", areaDoQuadrado);
	
	return 0;
	
}
