#include <stdio.h>

int main()
{
    float altura;
    printf("Digite a sua altura:\n");
    scanf("%f", &altura);
    printf("Seu peso ideal é: %f", (72.7*altura)-58 );
    return 0;
}
