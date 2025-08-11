#include <stdio.h>
#define N 5

int main()
{
    int vetor[N];
    for (int i = 0 ; i< N; i++){
        printf("Digite o numero %d\n", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i=0;i<N;i++){
        printf("(%d)", vetor[i]);
    }
    return 0;
}
