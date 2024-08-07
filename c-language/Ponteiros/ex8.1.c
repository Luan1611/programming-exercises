#include <stdio.h>
#include <stdlib.h>

void somatorioMedia( float a[], int n, float *somatorio, float *media );

int main() {

    float array[10];
    int tamanhoArray = (int) ( sizeof(array) / sizeof(array[0]) );
    float somatorio;
    float mediaAritmetica;

    // Lendo e armazenando valores
    for (int i = 0; i < tamanhoArray; i++) {
        printf("array[%d]: ", i);
        scanf("%f", &array[i]);
    }

    somatorioMedia(array, tamanhoArray, &somatorio, &mediaAritmetica);

    printf("Somatorio: %.2f\n", somatorio);
    printf("Media: %.2f\n", mediaAritmetica);


    return 0;

}

void somatorioMedia( float a[], int n, float *somatorio, float *media ) {

    for (int i = 0; i < n; i++) {
        *somatorio += a[i];
    }

    *media = *somatorio / n; 

}