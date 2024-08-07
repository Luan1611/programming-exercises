#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {

    int array[N];
    int arrayInvertido[N];
    int indice = N - 1;

    // lendo valores do array
    for (int i = 0; i < N; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    //preenchendo o array invertido
    for (int i = 0; i < N; i++) {
            arrayInvertido[i] = array[indice];
            --indice;
    }

    //exibindo o array invertido
    for (int i = 0; i < N; i++) {
        printf("arrayInvertido[%d] = %d\n", i, arrayInvertido[i]);
    }

    return 0;

}