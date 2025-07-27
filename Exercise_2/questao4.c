#include <stdio.h>

int main()
{
    int numero;
    scanf("%d", &numero);
    if ( numero > 0) {
        printf("o numero é positivo \n");
    }
    else if (numero < 0 ){
        printf("o numero eh negativo\n");
    }
    else{
    printf("o numero é nulo\n");
    }
    return 0;
}
