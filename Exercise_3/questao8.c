#include <stdio.h>

int main() {
    int a;
    printf("Digite o valor que voce deseja saber se é triangular:\n");
    scanf("%d", &a);
    int i = 1;
    while (i*(i+1)*(i+2)!= a && i<=a){
        i++;
    }
if (i*(i+1)*(i+2) == a){
    printf("O numero é triangular\n");

}
else{
    printf("O numero nao é triangular\n");
}
    return 0;
}
