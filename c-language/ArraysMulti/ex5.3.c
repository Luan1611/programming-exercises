#include <stdio.h>
#include <stdlib.h>

int main() {

    int array1[3][4];
    int array2[3][4];
    int qtdeLinhas = (int) ( sizeof(array1) / sizeof(array1[0]) );
    int qtdeColunas = (int) ( sizeof(array1[0]) / sizeof(array1[0][0]) );
    
    int numero;

    // Leitura e armazenamento dos valores
    for (int i = 0; i < qtdeLinhas; i++) {
        for (int j = 0; j < qtdeColunas; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Multiplicar por: ");
    scanf("%d", &numero);

    // Armazenando novos valores no segundo array
    for (int i = 0; i < qtdeLinhas; i++) {
        for (int j = 0; j < qtdeColunas; j++) {
            array2[i][j] = numero * array1[i][j];
        }
    }

    // Exibindo valores do array2 em forma de matriz
    for (int i = 0; i < qtdeLinhas; i++) {
        for (int j = 0; j < qtdeColunas; j++) {
            printf("%03d ", array2[i][j]);
        }
        printf("\n");
    }

    return 0;

}