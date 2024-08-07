#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float tempFahrenheit;
	float tempCelsius;
	
	printf("Temperatura em graus Fahrenheit: ");
	scanf("%f", &tempFahrenheit);
	
	tempCelsius = (tempFahrenheit - 32) / 1.8;
	
	printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", tempFahrenheit, tempCelsius);
	
	return 0;
	
}
