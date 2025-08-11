#include <stdio.h>

int main()
{
    int A, B;
    printf("Digite os valores da soma\n");
    scanf("%d %d", &A, &B);
    if ((A + B)>10) {
        printf("%d\n", (A + B));
    }
    else {
    printf("Faça uma soma que resulte maior que 10\n");
    }
}
