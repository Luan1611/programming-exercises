#include <stdio.h>
#include <stdlib.h>

void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg);

int main() {

    int valorTotalSegundos;
    int valorHoras;
    int valorMinutos;
    int valorSegundos;

    printf("Total de segundos: ");
    scanf("%d", &valorTotalSegundos);

    decompoeTempo(valorTotalSegundos, &valorHoras, &valorMinutos, &valorSegundos);

    printf("%d segundo(s) corresponde(m) a:\n", valorTotalSegundos);
    printf("%d hora(s)\n", valorHoras);
    printf("%d minutos(s)\n", valorMinutos);
    printf("%d segundos(s)\n", valorSegundos);
    
    return 0;

}

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg ) {

    *minutos = totalSeg/60;
    if (*minutos >= 60) {
        *minutos = *minutos % 60;
    }
    *horas = totalSeg/3600;
    *seg = totalSeg % 60;

}