#include <stdio.h>

int main() {
    float salarioAtual, percentual, novoSalario;

    printf("Digite o salário atual: R$ ");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual);

    novoSalario = salarioAtual + (salarioAtual * percentual / 100);

    printf("Novo salário: R$ %.2f\n", novoSalario);

    return 0;
}
