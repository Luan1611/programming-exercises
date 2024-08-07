#include <stdio.h>
#include <stdlib.h>

int main() {

    int array[3][3];
    int nroLinhas = (int) ( sizeof(array) / sizeof(array[0]) );
    int nroColunas = (int) ( sizeof(array[0]) / sizeof(array[0][0]) );
    int fator1 = 1;
    int fator2 = 1;
    int fator3 = 1;
    int fator4 = 1;
    int fator5 = 1;
    int fator6 = 1;

    int determinante;

    // Lendo e armazenando valores
    for (int i = 0; i < nroLinhas; i++) {
        for (int j = 0; j < nroColunas; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Calculando fatores do determinante
    for (int i = 0; i < nroLinhas; i++) {
        for (int j = 0; j < nroColunas; j++) {

            if (i == j) {
                fator1 *= array[i][j];
                if (i == 0) {
                    fator5 *= array[i][j];
                }
                if (i == 1) {
                    fator4 *= array[i][j];
                }
                if (i == 2) {
                    fator6 *= array[i][j];
                }
            }

            if (i < j) {
                fator2 *= array[i][j];
                if (i == 0) {
                    fator4 *= array[i][j];
                    fator6 *= array[i][j];
                    fator3 *= array[i][j];
                }
                if (i == 1) {
                    fator5 *= array[i][j];
                }
            }

            if (i > j) {
                fator3 *= array[i][j];
                if (i == 1) {
                    fator6 *= array[i][j];
                }
                if (i == 2) {
                    fator2 *= array[i][j];
                    fator4 *= array[i][j];
                    fator5 *= array[i][j];
                }
            }
        }
    }
    // Calculando e exibindo determinante
    determinante = fator1 + fator2 + fator3 - (fator4 + fator5 + fator6);
    printf("Determinante: %d", determinante);


    return 0;

}