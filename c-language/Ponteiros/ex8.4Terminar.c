#include <stdio.h>
#include <stdlib.h>


void decompoeData(int diaDoAno, int ano, int *mes, int *dia);

int ehBissexto(int ano);


int main() {

    int diaDoAno; // 1 a 365
    int ano;
    int mes;
    int dia;

    printf("Dia do ano: ");
    scanf("%d", &diaDoAno);
    printf("Ano: ");
    scanf("%d", &ano);

    decompoeData(diaDoAno, ano, &mes, &dia);

    printf("O dia %d do ano %d cai no dia %d do mes %d.", diaDoAno, ano, dia, mes);

    return 0;

}

void decompoeData(int diaDoAno, int ano, int *mes, int *dia) {
    if ( ehBissexto(ano) ) {
        *dia = ( (diaDoAno % 30) - 1 );
        *mes = ( (diaDoAno / 30) + 1 );
    } else {
        *dia = ( (diaDoAno % 30) );
        *mes = ( (diaDoAno / 30) + 1 );
    }
}

int ehBissexto(int ano) {
    if ( (ano % 4 == 0 || ano % 400 == 0) && (ano % 100 != 0) ) {
        return 1;
    }
    return 0;
}