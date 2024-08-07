#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char paresStrings[10][41];

    int nroLinhas = (int) ( sizeof(paresStrings) / sizeof(paresStrings[0]) );
    int nroColunas = (int) ( sizeof(paresStrings[0]) / sizeof(paresStrings[0][0]) );
    int contadorIndiceLin = 1;
    int contadorIndiceCol = 1;

    // Leitura e armazenamento das strings
    for (int i = 0; i < nroLinhas; i++) {
            printf("Par %d, palavra %d: ", contadorIndiceLin, contadorIndiceCol);
            fgets(paresStrings[i], 41, stdin);
            paresStrings[i][strlen(paresStrings[i])-1] = '\0';
            if (i % 2 != 0 && i != 0) {
                ++contadorIndiceLin;
            }
            if (i % 2 == 0) {
                ++contadorIndiceCol;
            } else {
                --contadorIndiceCol;
            }
    }
    
    return 0;

}