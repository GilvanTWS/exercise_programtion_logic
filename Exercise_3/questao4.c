#include <stdio.h>

int main()
{
    int n, i;
    float nota, maior, menor;
    printf("Digite o numero de alunos:\n");
    scanf("%d", &n);
    printf("Adicione a nota do aluno 1:\n");
    scanf("%f", &nota);
    maior = nota;
    menor = nota;
    for (i = 2; i <= n; i++)
    {
        printf("Adicione a nota do aluno %d:", i);
        scanf("%f", &nota);
        if (nota > maior)
        {
            maior = nota;
        }
        if (nota < menor)
        {
            menor = nota;
        }
    }
    printf("A maior nota é: %f\n", maior);
    printf("A menor nota é: %f\n", menor);
    return 0;
}
