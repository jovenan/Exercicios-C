#include <stdio.h>

void main() {

    char nome[30];
    int cod_func;
    int quant_pecas;
    float premio;

    premio = 0;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("Digite o cod da sua funcao: ");
    scanf("%d", &cod_func);
    printf("Digite quantas pecas vc produziu: ");
    scanf("%d", &quant_pecas);

    if (cod_func == 101) {
        premio = quant_pecas;
        if (quant_pecas > 10000){
            premio += 500.00;
        };
    };
    if (cod_func == 105) {
        premio = quant_pecas * 0.91;
        if (quant_pecas > 10000) {
            premio += 350.00;
        };
    };
    if (cod_func == 110) {
        premio = quant_pecas * 0.8;
        if (quant_pecas > 10000) {
            premio += 400.00;
        };
    };
    if (cod_func >= 115 && cod_func <= 120) {
        premio = quant_pecas * 0.95;
        if (quant_pecas > 10000) {
            premio += 420.00;
        };
    };

    printf("\n\n%s seu premio teve um total de R$%f",nome,premio);
};
