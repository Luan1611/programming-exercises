#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int array [5];
    int arrayCubo [5];
    int tamanho = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d", &array[i]);
    }

    for (int j = 0; j < tamanho; j++) {
        arrayCubo[j] = pow(array[j], 3);
        printf("Elemento de indice %d do arrayCubo: %d\n", j, arrayCubo[j]);
    }

    return 0;

}