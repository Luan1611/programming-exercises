#include <stdio.h>
#include <stdlib.h>

int main() {

int arrayInteiros [5];
int tamanhoDoArray = sizeof(arrayInteiros) / sizeof(arrayInteiros[0]);
int numeroParaSerBuscado;

for (int i = 0; i < tamanhoDoArray; i++) {
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &arrayInteiros[i]);
}

printf("Buscar por: ");
scanf("%d", &numeroParaSerBuscado);

// Conferindo se existe o numero
for (int j = 0; j < tamanhoDoArray; j++){
    if (arrayInteiros[j] == numeroParaSerBuscado) {
        printf("Indice %d: ACHEI\n", j);
    } else {
        printf("Indice %d: NAO ACHEI\n", j);
    }
}

return 0;

}