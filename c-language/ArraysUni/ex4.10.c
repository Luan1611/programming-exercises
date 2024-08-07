#include <stdio.h>
#include <stdlib.h>

#define N 5

int main () {

    int array[N];
    int arrayCopia[N];
    int indiceArrayCopia = 0;
    int numero;

    // Lendo valores e armazenando no array
    for(int i = 0; i < N; i++) {
    printf("array[%d]: ", i);
    scanf("%d", &array[i]);
    }

    printf("Copiar maiores que: ");
    scanf("%d", &numero);

    // Copiando numeros do array maiores que o numero digitado para o arrayCopia
    for(int i = 0; i < N; i++) {
        if (array[i] > numero) {
            arrayCopia[indiceArrayCopia] = array[i];
            indiceArrayCopia++;
        }
    }

    // Exibindo numeros do arrayCopia
    if (indiceArrayCopia == 0) {
        printf("Nao houve copia!\n");
    } else {
        for (int j = 0; j < indiceArrayCopia; j++) {
            printf("arrayCopia[%d] = %d\n", j, arrayCopia[j]);
        }
    }

    return 0;

}