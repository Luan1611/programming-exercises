#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

float numerador;
float denominador;

} Fracao;

Fracao somar( const Fracao *f1, const Fracao *f2 );

Fracao subtrair( const Fracao *f1, const Fracao *f2 );

Fracao multiplicar( const Fracao *f1, const Fracao *f2 );

Fracao dividir( const Fracao *f1, const Fracao *f2 );

void imprimirFracao( const Fracao *f );


int main() {

    Fracao f1;
    Fracao f2;
    Fracao soma;
    Fracao subtracao;
    Fracao multiplicacao;
    Fracao divisao;

    //Lendo numeradores e denominadores das duas fracoes
    for (int i = 0; i < 2; i++) {

        printf("Fracao %d\n", i+1);
        printf("Numerador: ");
        if (i == 0) {
            scanf("%f", &f1.numerador);
        } else {
            scanf("%f", &f2.numerador);
        }
        printf("Denominador: ");
        if (i == 0) {
            scanf("%f", &f1.denominador);
        } else {
            scanf("%f", &f2.denominador);
        }
    }

    //Operacoes
    soma = somar( &f1, &f2 );
    subtracao = subtrair( &f1, &f2 );
    multiplicacao = multiplicar( &f1, &f2 );
    divisao = dividir( &f1, &f2 );

    //Impressoes
    for (int i = 1; i <= 4; i++) {

        imprimirFracao(&f1);
        if (i == 1) {
            printf(" + ");
        }
        if (i == 2) {
            printf(" - ");
        }
        if (i == 3) {
            printf(" * ");
        }
        if (i == 4) {
            printf(" / ");
        }
        imprimirFracao(&f2);
        printf(" = ");
        if (i == 1) {
            printf("%.2f/%.2f\n", soma.numerador, soma.denominador);
        }
        if (i == 2) {
            printf("%.2f/%.2f\n", subtracao.numerador, subtracao.denominador);
        }
        if (i == 3) {
            printf("%.2f/%.2f\n", multiplicacao.numerador, multiplicacao.denominador);
        }
        if (i == 4) {
            printf("%.2f/%.2f\n", divisao.numerador, divisao.denominador);
        }

    }

    return 0;

}


Fracao somar( const Fracao *f1, const Fracao *f2 ) {

    Fracao so;

    if (f1 -> denominador == f2 -> denominador) {
        so.denominador = f1 -> denominador;
        so.numerador = (f1 -> numerador) + (f2 -> numerador);
        return so;
    } else {
        so.denominador = (f1 -> denominador) * (f2 ->denominador);
        so.numerador = (((so.denominador) / (f1 -> denominador)) * (f1 -> numerador)) + (((so.denominador) / (f2 -> denominador)) * (f2 -> numerador));
        return so;
    }
    
}


Fracao subtrair( const Fracao *f1, const Fracao *f2 ) {

    Fracao su;

    if (f1 -> denominador == f2 -> denominador) {
        su.denominador = f1 -> denominador;
        su.numerador = (f1 -> numerador) - (f2 -> numerador);
        return su;
    } else {
        su.denominador = (f1 -> denominador) * (f2 ->denominador);
        su.numerador = (((su.denominador) / (f1 -> denominador)) * (f1 -> numerador)) - (((su.denominador) / (f2 -> denominador)) * (f2 -> numerador));
        return su;
    }

}


Fracao multiplicar( const Fracao *f1, const Fracao *f2 ) {

    Fracao mu;

    mu.denominador = (f1 -> denominador) * (f2 -> denominador);
    mu.numerador = (f1 -> numerador) * (f2 -> numerador);

    return mu;

}


Fracao dividir( const Fracao *f1, const Fracao *f2 ) {

    Fracao di;

    di.denominador = (f1 -> denominador) * (f2 -> numerador);
    di.numerador = (f1 -> numerador) * (f2 -> denominador);

    return di;
}


void imprimirFracao( const Fracao *f ) {

    printf("%.2f/%.2f", f-> numerador, f-> denominador);

}