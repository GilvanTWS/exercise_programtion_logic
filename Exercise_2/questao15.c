#include <stdio.h>
int main()
{
    int idade;
    scanf("%d", &idade);
    if (idade<16 || idade > 65){
        printf("nao eleitor");
    }
    else if (idade == 16 || idade == 17){
        printf("voto facultativo");
    }
    else {
        printf("voto obrigatorio");
    }
    return 0;
}
