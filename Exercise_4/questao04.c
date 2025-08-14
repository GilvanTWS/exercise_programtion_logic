#include <stdio.h>
#define N 3

int main()
{
    int vet1[N], vet2[N], vet3[N+N], count;
    printf("Digite seu vetor 1 aqui em ordem crescente:\n");
    for(int i=0; i<N;i++){
        printf("Digite o valor de indice %d  ", i+1);
        scanf("%d", &vet1[i]);
    }

    printf("Digite seu segundo vetor aqui:\n");
    for(int j =0; j<N; j++){
        printf("Digite o valor de indice %d  ", j+1);
        scanf("%d", &vet2[j]);
    }
    for(int i = 0 ; i<N+N; i++){
        if(i<N){
            vet3[i]=vet1[i];
        }
        else if(i>=N){
            vet3[i]=vet2[i-N];
        }
    }
    for(int pass = 0; pass < 2*N - 1; pass++) {
        for(int i = 0; i < 2*N - 1; i++) {
            if(vet3[i] > vet3[i+1]) {
                count = vet3[i];
                vet3[i] = vet3[i+1];
                vet3[i+1] = count;
            }
        }
    }
    for(int i = 0; i<2*N; i++){
        printf("%d", vet3[i]);
    }
    return 0;
}
