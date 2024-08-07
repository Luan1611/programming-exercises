#include <stdio.h>
#include <stdlib.h>

int lePositivo();

int saoAmigos(int n1, int n2);

int somaDivisores(int n);

int main () {

    int array[5][2];
    int nroLinhas = (int) ( sizeof(array) / sizeof(array[0]) );
    int nroColunas = (int) ( sizeof(array[0]) / sizeof(array[0][0]) ); 

    // Lendo e armazenando no array 5 pares de valores positivos
    for (int i = 0; i < nroLinhas; i++) {
        for (int j = 0; j < nroColunas; j++) {
            printf("n%d[%d]: ", j+1, i);
            array[i][j] = lePositivo();
        }
    }

    // Imprimindo se elementos de cada par sao numeros amigos ou nao
    for (int i = 0; i < nroLinhas; i++) {
        for (int j = 0; j < nroColunas - 1; j++) {
            if (saoAmigos(array[i][j], array[i][j+1])) {
                printf("%d e %d sao amigos\n", array[i][j], array[i][j+1]);
            } else {
                printf("%d e %d nao sao amigos\n", array[i][j], array[i][j+1]);
            }
        }
    }

    return 0;

}

int lePositivo() {

    int ePositivo = 1;
    int nroLido;

    scanf("%d", &nroLido);
    if (nroLido <= 0){
        ePositivo = 0;
    }

    while (ePositivo == 0) {
        printf("Entre com um valor positivo: ");
        scanf("%d", &nroLido);
        if (nroLido > 0){
            ePositivo = 1;
        }
    }
    return nroLido;
}


int saoAmigos(int n1, int n2) {
    if (somaDivisores(n1) == n2 && somaDivisores(n2) == n1){
        return 1;
    }
    return 0;
}

int somaDivisores(int n) {

    int somaDivisores = 0;
    int divisor = 1;

    // achar divisores de n
    while (divisor != n) {
        if (n % divisor == 0) {
            //acrescentar divisor encontrado à variavel auxiliar 'somaDivisores'
            somaDivisores += divisor;
        }
        divisor++;
    }

    return somaDivisores;

}