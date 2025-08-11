#include <stdio.h>

int main()
{
    int a;
    printf("Digite um valor maior que 20");
    scanf("%d", &a);
    if (a>20){
        printf("%d", a);
    }
    else{
        printf("O valor nao é maior que 20");
    }
        
    return 0;
}
