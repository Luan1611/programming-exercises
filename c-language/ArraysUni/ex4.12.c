#include <stdio.h>
#include <stdlib.h>


int main() {

    int array[5];
    int tamanhoArray = (int) ( sizeof(array) / sizeof(array[0]) );
    int contadorQtdeElementosArray = tamanhoArray;

    // Lendo e armazenando valores no array
    for (int i = 0; i < tamanhoArray; i++) {
        printf("array[%d]: ", i);
        scanf ("%d", &array[i]);
    }

    // Removendo o primeiro elemento do array e alterando a posicao de todos os demais
    for (int i = 0; i < tamanhoArray; i++) {
        array[i] = array[i+1];
        if ( i == (tamanhoArray - 2) ) {
            i++;
            contadorQtdeElementosArray--;
        }
    }

    // Exibindo o array depois das alteracoes
    for (int i = 0; i < contadorQtdeElementosArray; i++) {
        printf("array[%d] =  %d\n", i, array[i]);
    }

    return 0;

}