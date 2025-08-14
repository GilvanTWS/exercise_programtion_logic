#include <stdio.h>
#define N 4
int main()
{
    int vet[N], vet2[N], count, palindromo = 1;
    printf("Digite o primeiro vetor:\n");
    for(int i = 0; i<N; i++){
        printf("Digite o valor %d/%d", i+1, N);
        scanf("%d", &vet[i]);
    }
    printf("Digite o segundo vetor:\n");
    for (int i = 0 ; i<N; i++){
        printf("Digite o valor %d/%d", i+1, N);
        scanf("%d", &vet2[i]);
    }   
    for (int i = 0; i < N/2; i++) {
        count = vet2[i];
        vet2[i] = vet2[N-1-i];
        vet2[N-1-i] = count;
    }
    for (int i = 0 ; i < N ; i++){
        if(vet[i]!=vet2[i]){
            palindromo = 0;
            break;
        }
    }
    if (!palindromo){
        printf("O numero nao é palindromo do outro\n");
    }
    if(palindromo){
        printf("O segundo é palindromo do primeiro\n");
    }
    return 0;
}
