#include <stdio.h>
int main(){
    int n, i, soma;
    printf("Digite o valor de n:\n");
    scanf("%d", &n);
    soma = 0;
    if(n%2==0){
        for(i=0; i<=n; i+=2){
            soma +=i;
        }
    }
    else{
        for(i=0; i<n; i+=2){
            soma +=i;
        }
    }
    printf("A soma é: %d\n", soma);
    return 0;
}
