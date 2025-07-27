#include <stdio.h>
int main(){
    int a, b, n;
    printf("Digite 2 numeros inteiros positivos:\n");
    scanf("%d %d", &a, &b);
    printf("Digite quantos multiplos voce deseja:\n");
    scanf("%d", &n);
    int i, count;
    i = 0;
    count = 0;

    while(count<n){
        if(i%a == 0 || i%b == 0){
            printf(" %d ", i);
            count++;
        }
        i++;
    }
    return 0;
}
