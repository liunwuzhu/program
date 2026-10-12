#include <stdio.h>
#include <math.h>
#define PI 3.14
#define L 20
int main(void)
{
    int h,r;

    scanf("%d %d",&h,&r);
    
    printf("%d",(int)(ceil((L * 1000.0)/(PI * r *r * h))));

    return 0;
}