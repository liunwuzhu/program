#include <stdio.h>
int mian(void)
{
    double t;
    int n;
    scanf("%lf %d",&t,&n);

    printf("%.3lf %d",t / n,n*2);
    return 0;
}