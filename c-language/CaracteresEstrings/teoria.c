#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char caractere = 'A';
    printf("%c\n", caractere);
    printf("%d\n", caractere);

    int codigoCaractere = (int) caractere;
    printf("%d\n", codigoCaractere);

    // verificar se caractere que entrou está entre A e Z:
    //Pode-se comparar usando operadores relacionais
    if (caractere >= 'A' && caractere <= 'Z') {
        printf("Ok\n");
    } else {
        printf("Erro\n");
    }

    // Conversão de uma string para float
    float vFloat = atof("12.5");
    printf("%f\n", vFloat);

    

    return 0;

}