#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    float num3;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite um número real: ");
    scanf("%f", &num3);

    float resultado1 = (2 * num1) * (num2 / 2.0);
    float resultado2 = (3 * num1) + num3;
    float resultado3 = pow(num3, 3);

    printf("\nResultado 1: %.2f\n", resultado1);
    printf("Resultado 2: %.2f\n", resultado2);
    printf("Resultado 3: %.2f\n", resultado3);

    return 0;
}
