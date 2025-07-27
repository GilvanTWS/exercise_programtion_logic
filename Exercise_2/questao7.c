#include <stdio.h>

int main(){
    int numero;
    scanf("%d", &numero);
    if (numero %3 == 0){
        printf("O numero é multiplo de 3");
    }
    else {
        printf("Não é multiplo de 3");
    }
    return 0;
}
