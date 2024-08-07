#include <stdio.h>
#include <stdlib.h>

void trocar(int *n1, int *n2);

int main() {

    int valor1;
    int valor2;

    printf("n1: ");
    scanf("%d", &valor1);
    printf("n2: ");
    scanf("%d", &valor2);

    printf("Antes:\n");
    printf("\tn1: %d\n", valor1);
    printf("\tn2: %d\n", valor2);

    trocar(&valor1, &valor2);

    printf("Depois:\n");
    printf("\tn1: %d\n", valor1);
    printf("\tn2: %d\n", valor2);

    return 0;

}

void trocar (int *n1, int *n2) {

    int variavelAuxiliar = *n1;
    *n1 = *n2;
    *n2 = variavelAuxiliar;

}