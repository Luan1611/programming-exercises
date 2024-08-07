#include <stdio.h>
#include <stdlib.h>

int lePositivo();

int somaDivisores(int n);

int main() {

    int arrayNros[5];
    int tamanhoArray = (int) ( sizeof(arrayNros) / sizeof(arrayNros[0]) );

    // Leitura e armazenamento de valores no arrayNros
    for (int i = 0; i < tamanhoArray; i++) {
        printf("n[%d]: ", i);
        arrayNros[i] = lePositivo();
    }

    // Exibicao da soma dos divisores de cada um dos numeros presentes no arrayNros
    for (int i = 0; i < tamanhoArray; i++) {
        printf("Soma dos divisores de %d: %d\n", arrayNros[i], somaDivisores(arrayNros[i]));
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