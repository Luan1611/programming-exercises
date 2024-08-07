#include <stdio.h>
#include <stdlib.h>


int ehPar(int n);

int ehDivisivel(int dividendo, int divisor);

int main() {

    int arrayMulti[5][2];
    int nroLinhas = (int) ( sizeof(arrayMulti) / sizeof(arrayMulti[0]) );
    int nroColunas = (int) ( sizeof(arrayMulti[0]) / sizeof(arrayMulti[0][0]) );

    // Lendo e armazenando os pares de valores
    for (int i = 0; i < nroLinhas; i++) {
        for (int j = 0; j < nroColunas; j++){
            printf("n%d[%d]: ", j+1, i);
            scanf("%d", &arrayMulti[i][j]);
        }
    }

    //Exibindo informacoes sobre os pares de numeros em cada "linha"
    for (int i = 0; i < nroLinhas; i++) {
        for (int j = 0; j < nroColunas - 1; j++) {
            if (ehPar(arrayMulti[i][j])) {
                if (ehDivisivel(arrayMulti[i][j], arrayMulti[i][j+1])) {
                    printf("%d eh par e %d eh divisivel por %d\n", arrayMulti[i][j], arrayMulti[i][j], arrayMulti[i][j+1]);
                } else {
                    printf("%d eh par e %d nao eh divisivel por %d\n", arrayMulti[i][j], arrayMulti[i][j], arrayMulti[i][j+1]);
                }
            } else {
                if (ehDivisivel(arrayMulti[i][j], arrayMulti[i][j+1])) {
                    printf("%d eh impar e %d eh divisivel por %d\n", arrayMulti[i][j], arrayMulti[i][j], arrayMulti[i][j+1]);
                } else {
                    printf("%d eh impar e %d nao eh divisivel por %d\n", arrayMulti[i][j], arrayMulti[i][j], arrayMulti[i][j+1]);
                }
            }
        }
    }

    return 0;

}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

int ehDivisivel(int dividendo, int divisor) {
    if (dividendo % divisor == 0) {
        return 1;
    }
    return 0;
}