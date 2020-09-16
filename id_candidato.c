#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdarg.h>
#include <windows.h>
#include <stdlib.h>
//nao funciona ainda

void main() {

    char NOME[30];
    int idade;
    char sexo;
    int retorno;

    printf("Digite seu nome:");
    scanf("%[^\n]s",&NOME);

    printf("Boa noite, %s",NOME);
    printf("\nDigite sua idade:");
    scanf("%d", &idade);

    printf("Digite seu sexo: [M] ou [F] ");

    sexo = getche( );
    sexo = toupper(sexo);


    if ((idade > 18) && (sexo == 'M')) {
        printf("\nParabens , voce se enquadra ao nossos requisitos de auxiliar de escritorio.");}

    else {if ((idade > 20) && (sexo == 'F')) {
        printf("Parabens , voce se enquadra ao nossos requisitos de secretaria.");}

    else {
        printf("Infelizmente voce nao pode fazer parte de nossa equipe.");};

}

};
