#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese"); // esse comando "ativa" a biblioteca de leitor de asentos no portugues
    int a, b, c, d;
    int menor, maior;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    menor = a;
    maior = a;
    if (b<menor) menor = b;
    if (c<menor) menor = c;
    if (d<menor) menor = d;

//ou seja, se  b,c ou d sao os menores valores (sao menores que o menor valor, lembre que cada if acontece em 
//sequesncia, se o primeiro nao for verdade, o segundo vai ser e assim por diante)

    if (b>maior) maior = b;
    if (c>maior) maior = c;
    if (d>maior) maior = d;

    printf("o maior valor é %d\n", maior);
    printf("o menor numero é %d\n", menor);

    return 0;
}
