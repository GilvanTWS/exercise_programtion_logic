#include <stdio.h>

int main(){
    int a, b;
    scanf ("%d %d", &a, &b);
    if(a<b){
        printf("%d é maior que %d", b, a);
    }
    else {
        printf("%d é maior que %d", a, b);
    }
    return 0;
}
