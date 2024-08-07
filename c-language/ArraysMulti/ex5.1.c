#include <stdio.h>
#include <stdlib.h>

int main () {

    int array2D[3][2];
    int qtdeLinhas = (int) (sizeof(array2D) / sizeof(array2D[0]));
    int qtdeColunas = (int) (sizeof(array2D[0])/sizeof(array2D[0][0]));

    // Lendo e armazenando valores
    for (int i = 0; i < qtdeLinhas; i++) {
        for (int j = 0; j < qtdeColunas; j++) {
            printf("array2D[%d][%d]: ", i, j);
            scanf("%d", &array2D[i][j]);
        }
    }

    // Exibindo os valores
    for (int i = 0; i < qtdeLinhas; i++) {
        for (int j = 0; j < qtdeColunas; j++) {
            printf("%03d ", array2D[i][j]);
        }
        printf("\n");

    }
    return 0;

}