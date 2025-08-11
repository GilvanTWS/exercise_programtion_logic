#include <stdio.h>

int main()
{
    float v, h;
    printf("Digite o valor que voce recebe por horas e a quantidade de horas trabalhadas num mes:\n");
    scanf("%f %f", &v, &h);
    printf("O valor a ser recebido no mes é: %0.2f", v*h);    
    return 0;
}
