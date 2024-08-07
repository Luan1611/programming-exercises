#include <stdio.h>
#include <stdlib.h>

int lePositivo();

int ehTriangulo(int ladoA, int ladoB, int ladoC);

int tipoTriangulo(int ladoA, int ladoB, int ladoC);

int main() {

    int array[5][3];
    int nroLinhas = (int) (sizeof(array) / sizeof(array[0]));
    int nroColunas = (int) (sizeof(array[0]) / sizeof(array[0][0]));
    

    //Lendo e armazenando trio de valores referente ao lados de cada triangulo, para 5 triangulos
    for(int i = 0; i < nroLinhas; i++) {
        int nomeLado = 65;
        for (int j = 0; j < nroColunas; j++) {
            printf("Lado%c[%d]: ", nomeLado, i);
            array[i][j] = lePositivo();
            nomeLado++;
        }
    }

    //Informando se formam triangulo e de qual tipo formam
    for (int i = 0; i < nroLinhas; i++) {
        for (int j = 0; j < nroColunas - 2; j++) {
            printf("Valores %d, %d e %d: ", array[i][j], array[i][j+1], array[i][j+2]);
            switch(ehTriangulo(array[i][j], array[i][j+1], array[i][j+2])) {
                case 1:
                    printf("triangulo equilatero\n");
                    break;
                case 2:
                    printf("triangulo isosceles\n");
                    break;
                case 3:
                    printf("triangulo escaleno\n");
                    break;
                default:
                    printf("nao formam um triangulo\n");
            }
        }
    }

    return 0;
}

int lePositivo() {

    int nroLido;
    int ePositivo = 1;

    scanf("%d", &nroLido);
    if (nroLido <= 0) {
        ePositivo = 0;
    }
    while (ePositivo == 0) {
        printf("Entre com um valor positivo e não nulo: ");
        scanf("%d", &nroLido);
        if (nroLido > 0) {
            ePositivo = 1;
        }
    }

    return nroLido;

}

int ehTriangulo(int ladoA, int ladoB, int ladoC) {
    if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA) {
        return tipoTriangulo(ladoA, ladoB, ladoC);
    }
    return 0;
}

int tipoTriangulo(int lA, int lB, int lC) {
    if (lA == lB && lB == lC) {
        return 1;
    }
    if (lA != lB & lB != lC) {
        return 3;
    }
    return 2;
}
