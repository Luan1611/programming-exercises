#include <stdio.h>
#include <stdlib.h>

int buscar(const int *a, int n, int chave);

int main() {

    int array[10];
    int tamanhoArray = (int) ( sizeof(array) / sizeof(array[0]) );
    int numero;
    int posicaoDoNumero;

    // Leitura e armazenamento dos 10 valores no array
    for (int i = 0; i < tamanhoArray; i++) {
        printf("n[%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Leitura e armazenamento do valor que sera posteriormente buscado no array
    printf("Buscar por: ");
    scanf("%D", &numero);

    // Busca pelo valor no array
    posicaoDoNumero = buscar(array, tamanhoArray, numero);
    if (posicaoDoNumero != -1) {
        printf("O valor %d foi encontrado na posicao %d.\n", numero, posicaoDoNumero);
    } else {
        printf("O valor %d nao foi encontrado.\n", numero);
    }

    return 0;

}

int buscar(const int *a, int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (a[i] == chave) {
            return i;
        }
    }
    return -1;
}