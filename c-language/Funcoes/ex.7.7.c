#include <stdio.h>
#include <stdlib.h>


int ehPrimo(int n);

int main() {

    for (int i = 1; i <= 20; i++) {

        if (ehPrimo(i)) {
            printf("%d: eh primo\n", i);
        } else {
            printf("%d: nao eh primo\n", i);
        }

    }

    return 0;

}

int ehPrimo(int n) {

    if (n != 2) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        if (n == 1) {
            return 0;
        }
        
    }

    return 1;

}