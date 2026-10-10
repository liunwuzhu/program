#include <stdio.h>
#define PI 3.14
#define L 20
int main(void)
{
    int h,r;

    scanf("%d %d",&h,&r);
    double s = ((L * 1000.0)/(PI * r *r *h));
    printf("%d",(int)s);

    return 0;
}
//运算符少加,