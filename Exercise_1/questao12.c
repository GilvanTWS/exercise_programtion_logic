#include <stdio.h>

int main() {
    int n, i;
    float nota, peso, somaNotas = 0, somaPesos = 0;

    printf("Quantas avaliações a disciplina possui? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Digite a nota da avaliação %d: ", i);
        scanf("%f", &nota);

        printf("Digite o peso da avaliação %d: ", i);
        scanf("%f", &peso);

        somaNotas += nota * peso;
        somaPesos += peso;
    }

    if (somaPesos == 0) {
        printf("Erro: a soma dos pesos não pode ser zero.\n");
    } else {
        float media = somaNotas / somaPesos;
        printf("Média final: %.2f\n", media);
    }

    return 0;
}
