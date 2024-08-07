#include <stdio.h>
#include <stdlib.h>

int absoluto(int n);

int main () {

    int numero;

    for (int i = 0; i < 5; i++) {
        printf("n%d: ", i);
        scanf("%d", &numero);
        printf("absoluto(%d) = %d\n", numero, absoluto(numero));
    }

    return 0;

}

int absoluto(int n) {
    if (n >= 0) {
        return n;
    } else {
        return -n;
    }

}