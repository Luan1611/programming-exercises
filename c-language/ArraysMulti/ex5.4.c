#include <stdio.h>
#include <stdlib.h>

int main() {

    int array[2][2];
    int qtdeLinhas = (int) (sizeof(array) / sizeof(array[0]));
    int qtdeColunas = (int) (sizeof(array[0]) / sizeof(array[0][0]));
    int fator1 = 1;
    int fator2 = 1;

    for (int i = 0; i < qtdeLinhas; i++) {
        for (int j = 0; j < qtdeColunas; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
            if (i == j) {
                fator1 *= array[i][j];
            } else {
                fator2 *= array[i][j];
            }
        }
    }

    printf("Determinante: %d", fator1 - fator2);

    return 0;

}