#include <stdio.h>
#include <stdlib.h>

int main() {

    int array [5];
    int tamanhoArray = sizeof(array) / sizeof(array[0]);
    int nroMultiplicador;
    int arrayProduto [5];

    for (int i = 0; i < tamanhoArray; i++) {
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("Multiplicar por: ");
    scanf("%d", &nroMultiplicador);

    for (int i = 0; i < tamanhoArray; i++){
        arrayProduto[i] = array[i] * nroMultiplicador;
    }

    for (int i = 0; i < tamanhoArray; i++) {
        printf("arrayProduto[%d] = %d\n", i, arrayProduto[i]);
    }

}