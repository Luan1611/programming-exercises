#include <stdio.h>
#include <stdlib.h>

#define N 5

int main () {

    int array[N];
    int pares[N];
    int impares[N];
    int contadorPares = 0;
    int contadorImpares = 0;
    int indicePares = 0;
    int indiceImpares = 0;

    for (int i = 0; i < N; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
        if ((array[i] % 2) == 0) {
            pares[indicePares] = array[i];
            indicePares++;
            contadorPares++;

        } else {
            impares[indiceImpares] = array[i];
            indiceImpares++;
            contadorImpares++;
        }
    }

    if (contadorPares > 0) {
        printf("Numeros pares: ");
        for (int i = 0; i < contadorPares; i++) {
            if (i == contadorPares - 1) {
                printf("%d.", pares[i]);
            } else {
                printf("%d ", pares[i]);
            }
        }
        printf("\n");
    } else {
        printf("Numeros pares: nao ha.\n");
    }

    if (contadorImpares > 0) {
        printf("Numeros impares: ");
        for (int i = 0; i < contadorImpares; i++) {
            if (i == contadorImpares - 1) {
                printf("%d.", impares[i]);
            } else {
                printf("%d ", impares[i]);
            }
        }
        printf("\n");
    } else {
        printf("Numeros impares: nao ha.\n");
    }

    return 0;

}