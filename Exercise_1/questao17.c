#include <stdio.h>

int main() {
    int dias, horas, minutos, segundos, totalSegundos;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);

    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    totalSegundos = (dias * 86400) + (horas * 3600) + (minutos * 60) + segundos;

    printf("Total em segundos: %d\n", totalSegundos);

    return 0;
}
