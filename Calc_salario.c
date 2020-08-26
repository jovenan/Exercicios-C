#include <stdio.h>

void main () {

    char nome[30];
    float salario_bruto;
    int num_faltas;
    float salario_liquido;
    float desc;
    float inss;
    float salario_dia;

    printf("Digite o nome: ");
    scanf("%s", &nome);

    printf("Digite o salario bruto: R$");
    scanf("%f", &salario_bruto);

    printf("Digite o numero de faltas: ");
    scanf("%d", &num_faltas);

    salario_dia = salario_bruto/30;
    desc = num_faltas * salario_dia;
    inss = salario_bruto * 0.1;
    salario_liquido = salario_bruto - desc - inss;

    printf("\n\n%s seu salario liquido e: %f , ao qual foi descontado por falta: %f , por inss: %f",nome,salario_liquido,desc,inss);
};
