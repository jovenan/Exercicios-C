#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdarg.h>
#include <windows.h>
#include <stdlib.h>

int tabuada(num) {
    int mult;
    char vetor[10];

    for (int i = 1; i <= 10; i++) {
        mult = 0;
        mult = i * num;
        vetor[i] = mult;
        printf("%d x %d = %d\n", num, i , vetor[i]);
    }
    return vetor;
}

void main () {

    int num;

    printf("Tabuada\n\n");
    printf("Digite o numero ao qual quer ver a tabuada: \n");
    scanf("%d", &num);

    tabuada(num);
}
