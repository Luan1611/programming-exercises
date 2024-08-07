#include <stdio.h>
#include <stdlib.h>

int main() {

    int array [10];
    int valorValido = 0;
    int quantidade;
    int indiceMaxArrayComNumeros;
    int valorQueSeraInserido;

    while (valorValido == 0) {
        printf("Quantidade de elementos (de 1 a 9): ");
        scanf("%d", &quantidade);
        if (quantidade < 1 || quantidade > 9) {
            printf("Quantidade incorreta, forneca novamente!\n");
        } else {
            indiceMaxArrayComNumeros = quantidade - 1;
            valorValido = 1;
        }
    }

    for (int i = 0; i < quantidade; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Valor que sera inserido: ");
    scanf("%d", &valorQueSeraInserido);

    for (int i = indiceMaxArrayComNumeros; i >= 0; i--) {
        array[indiceMaxArrayComNumeros + 1] = array[i];
        indiceMaxArrayComNumeros--;
        if (i == 0) {
            array[i] = valorQueSeraInserido;
            indiceMaxArrayComNumeros = quantidade;
        }
    }

    for (int i = 0; i <= indiceMaxArrayComNumeros; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;

}