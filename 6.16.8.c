#include <stdio.h>
#include <math.h>
int main(void)
{
    double m,n,i;

    while(printf("PLease enter two floatingpoint numbers:\n"),
    scanf("%lf %lf",&m,&n) == 2)
    {
        i = fabs(m - n)/(m * n);
        printf("%15f\n",i);
    }
}