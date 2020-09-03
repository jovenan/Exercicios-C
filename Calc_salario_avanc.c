#include <stdio.h>

void main() {

    char nome[30];
    int cod_func;
    float salario_bruto;
    int num_dependentes;
    float salario_liquido;
    float novo_salario;
    float descontos;
    float reajuste;
    float seguro_saude;
    float inss;
    float ir;

    printf("Digite o nome do funcionario: ");
    scanf("%s", &nome);
    printf("Digite o codigo da funcao: ");
    scanf("%d", &cod_func);
    printf("Digite o salario bruto: ");
    scanf("%f", &salario_bruto);
    printf("Digite seu numero de dependentes: ");
    scanf("%d", &num_dependentes);

    if (cod_func > 99 && cod_func < 201) {reajuste = salario_bruto + (salario_bruto * 0.15);};
    if (cod_func > 200 && cod_func < 301) {reajuste = salario_bruto + (salario_bruto * 0.2);};
    if (cod_func > 300) {reajuste = salario_bruto + (salario_bruto * 0.25);};
    novo_salario = reajuste;

    seguro_saude = novo_salario * 0.05;

    if (salario_bruto <= 1200) {ir = salario_bruto - num_dependentes * 90;};
    if (salario_bruto > 1200 && salario_bruto <= 1900) {ir = (salario_bruto - num_dependentes * 90) * 0.1;};
    if (salario_bruto > 1200 && salario_bruto <= 2500) {ir = (salario_bruto - num_dependentes * 90) * 0.15;};
    if (salario_bruto >= 2500) {ir = (salario_bruto - num_dependentes * 90) * 0.25;};

    if (salario_bruto <= 380) {inss = salario_bruto * 0.08;};
    if (salario_bruto > 380 && salario_bruto <= 600) {inss = salario_bruto * 0.09;};
    if (salario_bruto > 600 && salario_bruto <= 1000) {inss = salario_bruto * 0.095;};
    if (salario_bruto > 1000 && salario_bruto <=1320) {inss = salario_bruto * 0.1;};
    if (salario_bruto >= 1320) {inss = 132;};

    descontos = inss + ir + seguro_saude;
    salario_liquido = novo_salario - descontos;

    printf("\n-----------------------------------------------------------------------------------------------------------------");
    printf("\n%s seu salario liquido é %f",nome,salario_liquido);
    printf("\n-----------------------------------------------------------------------------------------------------------------");
    printf("\nFoi descontado um total de %f sendo %f de inss, %f de IR e %f de Seguro saude.",descontos,inss,ir,seguro_saude);
    printf("\n-----------------------------------------------------------------------------------------------------------------");
};
