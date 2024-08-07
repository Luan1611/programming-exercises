#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {
    
    int array1[N];
    int array2[N];
    int arraySoma[N];
    
    printf("Digite os valores do primeiro Array:\n");
    for (int i = 0; i < N; i++) {
        printf("array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("Digite os valores do segundo Array:\n");
    for (int i = 0; i < N; i++) {
        printf("array2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < N; i++) {
        arraySoma[i] = array1[i] + array2[i];
        printf("arraySoma[%d] = %d\n", i, arraySoma[i]);
    }

    return 0;

}