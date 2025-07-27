#include <stdio.h>

int main() {
    int dias;
    float km, preco;

    printf("Digite a quantidade de dias de aluguel: ");
    scanf("%d", &dias);

    printf("Digite a quantidade de km percorridos: ");
    scanf("%f", &km);

    preco = (dias * 60.0) + (km * 0.15);

    printf("Preço total do aluguel: R$ %.2f\n", preco);

    return 0;
}
