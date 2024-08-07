#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float a;
	float b;
	float c;
	
	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	printf("c: ");
	scanf("%f", &c);
	
	if (abs(a - b) < c && c < a + b && abs(a - c) < b && b < a + c && abs(b - c) < a && a < b + c) {
		
		if (a == b && b == c) {
			
			printf("Triangulo EQUILATERO");
			
		} else {
			
			if (a == b || a == c || b == c) {
				
				printf("Triangulo ISOSCELES");
				
			} else {
				
				printf("Triangulo ESCALENO");
				
			}
			
		}

	} else {
		
		printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
		
	}
	
	return 0;
	
}
