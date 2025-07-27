#include <stdio.h>

int main() {
    float salarioBruto, imposto, sindicato, salarioLiquido;

    printf("Digite quanto você ganha por mês (salário bruto): R$ ");
    scanf("%f", &salarioBruto);

    imposto = salarioBruto * 0.08;
    sindicato = salarioBruto * 0.05;
    salarioLiquido = salarioBruto - imposto - sindicato;

    printf("\n--- Demonstrativo ---\n");
    printf("Salário Bruto:      R$ %.2f\n", salarioBruto);
    printf("Imposto (8%%):       R$ %.2f\n", imposto);
    printf("Sindicato (5%%):     R$ %.2f\n", sindicato);
    printf("Salário Líquido:    R$ %.2f\n", salarioLiquido);

    return 0;
}
