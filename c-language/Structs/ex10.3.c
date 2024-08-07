#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    int horas;
    int minutos;
    int segundos;

} Hora;

Hora gerarHora(int seg);

int main() {

    int segundos;

    printf("Segundos: ");
    scanf("%d", &segundos);

    Hora hora = gerarHora(segundos);

    printf("Hora correspondente: %d:%d:%d", hora.horas, hora.minutos, hora.segundos);

    return 0;

}

Hora gerarHora(int seg) {

    Hora h;

    int minutos = seg/60;
    int horas = minutos/60;
    int segundos = seg%60;
    minutos = minutos%60;

    h.minutos = minutos;
    h.horas = horas;
    h.segundos = segundos;

    return h;
}