#include <stdio.h>
#define N 5
int main()
{
    int vetor[N];
    int x, y;
    int existex = 0, existey = 0;
    printf("Digite os valores do seu vetor:\n");
    for (int i = 0 ; i < N; i++){
        scanf("%d", &vetor[i]);
    }
    printf("Seu vetor original é:\n");

    for (int i = 0 ; i<N ; i++){
        printf("%d", vetor[i]);
    }

    printf("\n");
    printf("Digite o numero X para que seja verificado se ele esta no vetor ou nao:\n");
    scanf("%d", &x);
    for (int i = 0 ; i<N ; i++){
        if(vetor[i]==x){
            existex = 1;
        }
    }
    if (!existex){
        printf("%d nao esta no vetor original", x);
    }
    else if (existex){
    printf("O valor <%d>, esta no vetor original", x);
    printf("\nDigite o valor Y para que seja verificado se ele esta no vetor ou nao\n");
    scanf("%d", &y);

    for (int i = 0 ; i<N ; i++){
        if(vetor[i]==y){
            existey = 1;
        }
    }
    if(!existey){
        for (int i = 0 ; i<N ; i++){
            if(vetor[i] == x){
                vetor[i]=y;
            }
        }
    }


    printf("Seu novo vetor é:\n");
    for (int i = 0 ; i<N ; i++){
        printf("%d", vetor[i]);
        }
    }
    return 0;
}
