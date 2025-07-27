#include <stdio.h>

int main()
{
    float a;
    printf("Digite o valor em metros a ser convertido para centimetros:\n");
    scanf("%f", &a);
    printf("%f metros é igual a %f centimentos\n", a, a*100);    
    return 0;
}
