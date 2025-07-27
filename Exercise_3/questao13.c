#include <stdio.h>

int main() {
    int a, b, resto;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("O MDC é: %d\n", a);

    return 0;
}
//this code was made ussing the Euclide's Theoreme