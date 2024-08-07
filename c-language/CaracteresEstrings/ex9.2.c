#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char sentenca[41];

    printf("Sentenca: ");
    fgets(sentenca, 41, stdin);
    sentenca[ strlen(sentenca) - 1 ] = '\0';

    printf("Primeiro caractere da sentenca: %c\n", sentenca[0]);
    printf("Ultimo caractere da sentenca: %c\n", sentenca[ strlen(sentenca) - 1 ]);
    printf("Numero da tabela ASCII correspondente ao ultimo caractere da sentenca: %d\n", sentenca[ strlen(sentenca) - 1 ]);
    printf("Numero de caracteres: %d", strlen(sentenca));

    return 0;

}