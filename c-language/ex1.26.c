#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float tempCelsius;
	float tempFahrenheit;
	
	printf("Temperatura em graus Celsius: ");
	scanf("%f", &tempCelsius);
	
	tempFahrenheit = (1.8 * tempCelsius) + 32;
	
	printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", tempCelsius, tempFahrenheit);
	
	return 0;
	
}
