#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a==5 || a==200 || (10<a && a<100) || (250<a && a< 500)) {
        printf("é valido");
    }
    else {
        printf("nao eh valido");
    }
    return 0;
}
