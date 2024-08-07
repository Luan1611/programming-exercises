#include <stdio.h>
#include <stdlib.h>

int main() {

    int array1[3][3];
    int array2[3][3];
    int arraySoma[3][3];
    int qtdeLinhasArrays = 3;
    int qtdeColunasArrays = 3;

    // Lendo e armazendo valores no primeiro Array
    for (int i = 0; i < qtdeLinhasArrays; i++) {
        for (int j = 0; j < qtdeColunasArrays; j++) {
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    // Lendo e armazendo valores no segundo Array
    for (int i = 0; i < qtdeLinhasArrays; i++) {
        for (int j = 0; j < qtdeColunasArrays; j++) {
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    // Somando valores do array1 com os respectivos valores do array2
    // e armazenando cada resultado no arraySoma
    for (int i = 0; i < qtdeLinhasArrays; i++) {
        for (int j = 0; j < qtdeColunasArrays; j++) {
            arraySoma[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Exibindo informacoes na saida
    printf("\narray1:       array2:       arraySoma:\n");
    for (int i = 0; i < qtdeLinhasArrays; i++) {
        for (int j = 0; j < qtdeColunasArrays; j++) {
            printf("%03d ", array1[i][j]);
        }
        if (i == 1) {
            printf("+ ");
        } else {
            printf("  ");
        }
        for (int j = 0; j < qtdeColunasArrays; j++) {
            printf("%03d ", array2[i][j]);
        }
        if (i == 1) {
            printf("= ");
        } else {
            printf("  ");
        }
        for (int j = 0; j < qtdeColunasArrays; j++) {
            printf("%03d ", arraySoma[i][j]);
        }
        printf("\n");
    }


    return 0;

}