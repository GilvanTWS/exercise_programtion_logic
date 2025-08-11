#include <stdio.h>
int main()
{
    int a, i;
    int numero = 1;
    printf("digite quantos impares vc deseja:\n");
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        printf("%d\n", numero);
        numero += 2;
    }
    return 0;
}
// Faça um programa que receba um número n e imprima os n primeiros números
// impares.
