#include <stdio.h>
int main()
{
    int a, i = 1;
    scanf("%d", &a);
    if (a % 2 == 0)
        {
        a = a + 1;
        }
        for (i = 1; i < a; i += 2)
        {
            printf("%d ", i);
        }

    return 0;
}
// Faça um programa que receba um número n e imprima os n primeiros números
// impares.
