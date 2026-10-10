#include <stdio.h>
int main(void)
{
    double m , v , t;

    scanf("%lf %lf",&m,&v);

    t = m / v;
    printf("0%d:%d",(int)(8 - ((t+10) / 60.0 )), (t+10));

    return 0;
}