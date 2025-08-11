#include <stdio.h>

int main()
{
    int a;
    printf("Digite o numero que voce deseja saber o antecessor: \n");
    scanf("%d", &a);
    printf("O antecessor de %d é %d", a, a-1);    
    return 0;
}
