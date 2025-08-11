#include <stdio.h>
#define N 3
int main()
{
    int vet1[N], vet2[N], vet3[N+1];
    int soma, carry = 0;

    printf("Digite os valores do vet1\n");
    for(int i =0 ; i<N ; i++){
        scanf("%d", &vet1[i]);
        while(vet1[i]> 9 || vet1[i] < 0 ){
            printf("Digite um valor entre 0 e 9 para a posição %d", i+1);
            scanf("%d", &vet1[i]);
        }
    }

    printf("Digite os valores do vet2\n");
    for(int i =0 ; i<N ; i++){
        scanf("%d", &vet2[i]);
        while(vet2[i]> 9 || vet2[i] < 0 ){
            printf("Digite um valor entre 0 e 9 para a posição %d", i+1);
            scanf("%d", &vet2[i]);
        }
    }
    for (int i = N-1 ; i>=0; i--){
        soma = vet1[i]+vet2[i] + carry;
        vet3[i+1] = soma %10;
        carry = soma /10;
    }
    vet3[0]= carry;
    printf("Vet1 = ");
    for (int i = 0; i<N; i++){
        printf("%d", vet1[i]);
    }
    printf("\n");
    printf("Vet2 = ");
    for (int i = 0; i<N; i++){
        printf("%d", vet2[i]);
    }
    printf("\n");
    printf("Vet3 = ");
    if(carry){
        for (int i = 0; i < N +1 ; i++){
            printf("%d", vet3[i]);
        }
    }
    else if(!carry){
        for(int i = 1; i<=N; i++){
            printf("%d", vet3[i]);
        }
    }
    printf("\n");
    return 0;
}
