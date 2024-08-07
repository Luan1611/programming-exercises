#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    int vermelho;
    int verde;
    int azul;

} Cor;

Cor novaCor( int vermelho, int verde, int azul );
void imprimirCor( const Cor *c );

int main() {

    Cor cor;
    int vermelho;
    int verde;
    int azul;

    printf("Vermelho: ");
    scanf("%d%*c", &vermelho);
    printf("Verde: ");
    scanf("%d%*c", &verde);
    printf("Azul: ");
    scanf("%d%*c", &azul);
    
    cor = novaCor( vermelho, verde, azul );

    imprimirCor( &cor );

    return 0;

}

Cor novaCor( int vermelho, int verde, int azul) {

    Cor novaCor;

    if (vermelho < 0) {
        novaCor.vermelho = 0;
    } else {
        if (vermelho > 255) {
            novaCor.vermelho = 255;
        } else {
            novaCor.vermelho = vermelho;
        }
    }

    if (verde < 0) {
        novaCor.verde = 0;
    } else {
        if (verde > 255) {
            novaCor.verde = 255;
        } else {
            novaCor.verde = verde;
        }
    }

    if (azul < 0) {
        novaCor.azul = 0;
    } else {
        if (azul > 255) {
            novaCor.azul = 255;
        } else {
            novaCor.azul = azul;
        }
    }

    return novaCor;

}

void imprimirCor( const Cor *c ) {

    printf("Cor: rgb( ");
    printf("%d, %d, %d )", c -> vermelho, c -> verde, c -> azul);

}