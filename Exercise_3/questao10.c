#include <stdio.h>

int main(){
    int a, i, soma, maior;
    i=1;
    soma=0;
    maior = 0;
        while(i<31){
            printf("Digite o numero de discos vendido no dia %d\n", i);
            scanf("%d", &a);
                if(a>maior){
                 maior = a;
                }
            i++;
            soma = a+soma;
        }
    printf("O numero total de discos vendido no mês foi: %d\n", soma);
    printf("A maior venda do mes foi: %d", maior);

    return 0;
}
