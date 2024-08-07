#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    float parteReal;
    float parteImaginaria;

} Complexo;

Complexo somar( const Complexo *c1, const Complexo *c2 );

void imprimirComplexo( const Complexo *c );

int main() {

    Complexo complexo1;
    Complexo complexo2;
    char resultado [50];

    for (int i = 0; i < 2; i++) {
        printf("Complexo %d\n", i+1);
        printf("\tParte real: ");
        if (i == 0) {
            scanf("%f%*c", &complexo1.parteReal);
        } else {
            scanf("%f%*c", &complexo2.parteReal);
        }
        printf("\tParte imaginaria: ");
        if (i == 0) {
            scanf("%f%*c", &complexo1.parteImaginaria);
        } else {
            scanf("%f%*c", &complexo2.parteImaginaria);
        }
    }

    Complexo complexo3 = somar( &complexo1, &complexo2 );

    imprimirComplexo(&complexo1);
    printf(" + ");
    imprimirComplexo(&complexo2);
    printf(" = ");
    imprimirComplexo(&complexo3);

    return 0;

}

Complexo somar( const Complexo *c1, const Complexo *c2 ) {

    Complexo soma;

    soma.parteReal = (c1 -> parteReal) + (c2 -> parteReal);
    soma.parteImaginaria = (c1 -> parteImaginaria) + (c2 -> parteImaginaria);

    return soma;

}

void imprimirComplexo( const Complexo *c ) {
    printf("(%.2f + %.2fi)", c -> parteReal, c -> parteImaginaria);
}