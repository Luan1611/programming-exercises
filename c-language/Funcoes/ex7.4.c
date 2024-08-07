#include <stdio.h>
#include <stdlib.h>


int lePositivo();

int somatorio(int n);

int main() {
    
    int array[5];
    int tamanhoArray = (int) (sizeof(array) / sizeof(array[0]));

    // Lendo e armazenando cinco numeros positivos no Array
    for (int i  = 0; i < tamanhoArray; i++) {
        printf("n[%d]: ", i);
        array[i] = lePositivo();
    }

    //Exibindo somatorio de 1 a cada um dos numeros presentes no array
    for (int i = 0; i < tamanhoArray; i++) {
        printf("Somatorio de 1 a %d: ", array[i]);
        printf("%d\n", somatorio(array[i]));
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

int somatorio(int n) {

    int soma = 0;
    int parcela = 1;

    for (int i = 0; i < n; i++) {
        soma = soma + parcela;
        parcela++;
    }

    return soma;
}