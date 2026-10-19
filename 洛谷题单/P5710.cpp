#include <stdio.h>
int main(void)
{
    int A = 0,U = 0,B = 0,Z = 0,X = 0;
    
    scanf("%d",&X);
    int min = (X % 2 == 0);
    int max = (X > 4 && X <= 12);
    A = (min && max);
    U = (min || max);
    B = (min ^ max);
    Z = (!min && !max);
    printf("%d %d %d %d",A,U,B,Z);
    return 0;
}