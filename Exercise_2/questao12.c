#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if( 20<a && a<90) {
        printf("o numero esta entre 20 e 90");
    }
    else{
        printf("digite um valor entre 20 e 90");
    }

    return 0;
}
