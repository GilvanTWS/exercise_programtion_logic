#include <stdio.h>
#include <math.h>

int main(){
    int x, y, z;
    scanf("%d", &x);
    y = pow(x,2);
    z = pow(x, 3);
    if (x <=1) {
        printf("f(x)=1");
        }
    else if ( 1<x && x<=2){
        printf("f(x) = 2");
        }
    else if (2<x && x<3){
        printf("f(x) = %d", y);
        }
    else{
        printf("f(x) = %d", z);
        }
    return 0;
}
