#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Digite os valores das notas: \n");
    scanf("%f %f %f", &a, &b, &c);
    printf("A media arimetica das 3 notas é: %0.2f", (a+b+c)/3);
    return 0;
}
