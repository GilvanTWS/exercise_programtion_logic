#include <stdio.h>

int main()
{   
    float l;
    printf("Digite o valor do lado do quadrado:\n");
    scanf("%f", &l);
    printf("A area deste quadrado é %0.2f e o dobro da area deste quadrado é: %0.2f", l*l, l*l*2);
    return 0;
}
