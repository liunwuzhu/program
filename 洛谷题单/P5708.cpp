#include <stdio.h>
#include <math.h>
int main(void)
{
    double a,b,c,S,p;

    scanf("%lf %lf %lf",&a,&b,&c);
    p = (a+b+c) / 2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1f",S);

    return 0;

}