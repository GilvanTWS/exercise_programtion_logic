#include <stdio.h>
#include <math.h>

int main() 
{
    float A, R, C;
    scanf("%f", &A );
    R = sqrt(A);
    C = pow(A, 2);
    if (A>0) {
        printf("%.2f", R);
    }
    else {
        printf("%.2f", C);    
    }
    return 0;
}
