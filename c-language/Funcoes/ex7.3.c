#include <stdio.h>
#include <stdlib.h>


float maiorNumero(float nro1, float nro2);

int main() {

    float arrayNros[5][2];
    int qtdeLinhas = 5;
    int qtdeColunas = 2;
    float numero;
    int ePositivo = 0;
    float maiorNro;

    // Lendo e armazenando os cinco pares de valores positivos em um array de duas dimensoes
    for (int i = 0; i < qtdeLinhas; i++) {
        for (int j = 0; j < qtdeColunas; j++) {
            while (ePositivo == 0) {
                printf("n%d[%d]: ", j+1, i);
                scanf("%f", &numero);
                if (numero > 0) {
                    ePositivo = 1;
                } else {
                    printf("Entre com um valor positivo!\n");
                }
            }
            arrayNros[i][j] = numero;
            ePositivo = 0;
        }
    }

        // Verificando qual o maior valor de cada par de valores e exibindo-o
        for (int i = 0; i < qtdeLinhas; i++) {
            int indiceColuna = 0;
            for (int j = 0; j < qtdeColunas; j++) {
                indiceColuna = j;
                if (j < 1) {
                    printf("%.2f, ", arrayNros[i][j]);
                } else {
                    printf("%.2f: ", arrayNros[i][j]);
                }
            }
            float maiorNro = maiorNumero(arrayNros[i][indiceColuna - 1], arrayNros[i][indiceColuna]);
            if (maiorNro != -1) {
                printf("O maior valor e %.2f\n", maiorNro);
            } else {
                printf("Eles sao iguais\n");
            }

        }

    return 0;

}

float maiorNumero(float nro1, float nro2) {
    if (nro1 > nro2) {
        return nro1;
    } else {
        if (nro2 > nro1){
            return nro2;
        }
    }
    return -1;
    
}