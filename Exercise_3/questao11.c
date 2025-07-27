#include <stdio.h>

int main() {
    int n;
    int valorA;
    int valorB;
    int streak = 1;

    printf("Qual vai ser o tamanho da sequência? ");
    scanf("%d", &n);

    printf("Digite uma sequência com %d números!\n", n);

    for (int i = 1; i <= n; i++) {
        printf("Elemento %d : ", i);
        scanf("%d", &valorA);

        if (i > 1 && valorA == valorB)
            streak++;

        valorB = valorA;
    }

    printf("Há %d números consecutivos\n", streak);

    return 0;
}
