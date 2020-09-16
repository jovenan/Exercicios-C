#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdarg.h>
#include <windows.h>
#include <stdlib.h>

void main() {

    int vetA[15];
    int vetB[15];
    int vetC[30];
    int cont = 0;


    printf("\nDigite dados para o primeiro Vetor\n");

    while(cont < 15) {
        printf("Digite um numero: ");
        scanf("%d", &vetA[cont]);
        cont ++;
    };

    printf("\nDigite dados para o segundo Vetor\n");
    for (int i = 0; i < 15; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetB[i]);
    };

    for (int i = 0; i < 15; i++) {
        vetC[i] = vetA[i];
        printf("%d ", vetC[i]);
    };

    for (int i = 0; i < 15; i++) {
        vetC[i] = vetB[i];
        printf("%d ", vetC[i]);
    };

}
