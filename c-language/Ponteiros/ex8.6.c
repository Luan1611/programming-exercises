#include <stdio.h>
#include <stdlib.h>

void pInterno(const double *a1, const double *a2, double *pi, int n);

int main() {

    double a1[5];
    double a2[5];
    double pi[5];
    int tamanhoArray = 5;

    // Lendo e armazenando os valores no a1
    for (int i = 0; i < tamanhoArray; i++){
        printf("a1[%d]: ", i);
        scanf("%lf", &a1[i]);
    }

    // Lendo e armazenando os valores no a2
    for (int i = 0; i < tamanhoArray; i++) {
        printf("a2[%d]: ", i);
        scanf("%lf", &a2[i]);
    }

    // Calculando valores do produto interno entre a1 e a2, armazenando resultado em pi
    pInterno(a1, a2, pi, tamanhoArray);

    // Exibindo os valores de pi
    for (int i = 0; i < tamanhoArray; i++) {
        printf("%.2lf x %.2lf = %.2lf\n", a1[i], a2[i], pi[i]);
    }

    return 0;

}

void pInterno(const double *a1, const double *a2, double *pi, int n) {
    for (int i = 0; i < n; i++) {
        pi[i] = (a1[i] * a2[i]);
    }
}