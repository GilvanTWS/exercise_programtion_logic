#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    if(n>0){
        for( i = 1; i<=n; i++){
        printf(" %d ", i);
    }
    }
    else{
        printf("Digite um numero positivo");
    }
    return 0;
}
 //Faça um programa que receba um número n e imprima os n primeiros inteiros positivos
