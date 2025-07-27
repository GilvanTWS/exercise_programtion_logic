#include <stdio.h>

int mdc(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int a, b, resultado_mmc;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    resultado_mmc = (a * b) / mdc(a, b);

    printf("O MMC é: %d\n", resultado_mmc);

    return 0;
}
