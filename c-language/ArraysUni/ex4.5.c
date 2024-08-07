#include <stdio.h>
#include <stdlib.h>

int main() {

    int array[5];
    int tamanhoArray = sizeof(array) / sizeof(array[0]);
    int contador = 0;
    int numeroParaSerBuscado;

    for (int i = 0; i < tamanhoArray; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &numeroParaSerBuscado);

    //buscando numero
    for (int j = 0; j < tamanhoArray; j++) {
        if (array[j] == numeroParaSerBuscado) {
            contador++;
        }
    }

    //Saida
    if (contador > 1) {
        printf("O array contem %d ocorrencias do valor %d.", contador, numeroParaSerBuscado);
    } else {
        if (contador == 1) {
            printf("O array contem %d ocorrencia do valor %d.", contador, numeroParaSerBuscado);
        } else {
            printf("O array nao contem o valor %d.", numeroParaSerBuscado);
        }
    }
    
    return 0;

}