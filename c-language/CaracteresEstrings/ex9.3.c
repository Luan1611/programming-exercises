#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {


    char sentenca[41];
    printf("Sentenca: ");
    fgets(sentenca, 41, stdin);
    sentenca[ ( strlen(sentenca) - 1 ) ] = '\0';

    for (int i = 0; i < strlen(sentenca); i++) {
        if (i % 2 == 0) {
            if (i < strlen(sentenca) - 2) {
                if (isgraph(sentenca[i]) == 0) {
                    printf("'%c', ", sentenca[i]);
                }
                else {
                    printf("%c, ", sentenca[i]);
                }
            } else {
                if (isgraph(sentenca[i]) == 0) {
                    printf("'%c'", sentenca[i]);
                }
                else {
                    printf("%c", sentenca[i]);
                }
            }
        }
    }

    return 0;


}