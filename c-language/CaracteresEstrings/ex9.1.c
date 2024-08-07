#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    char string[41];

    // Leitura e armazenamento da string
    printf("String: ");
    fgets(string, 41, stdin);
    string[ strlen(string) - 1 ] = '\0';

    // Exibindo os 4 primeiros caracteres da string
    for (int i = 0; i < 4; i++) {
        if (i < 3) {
            printf("%c, ", string[i]);
        } else {
            printf("%c.", string[i]);
        }
    }

    printf("\n%d", strlen(string));

    return 0;

}