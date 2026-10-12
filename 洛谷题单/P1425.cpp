#include <stdio.h>
int main(void)
{
    int a,b,c,d,f,g;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    f = c - a - 1;
    if ((60 - b + d) > 60)
    {
        f++;
        g = d - b;
    }
    else
    {
        g = 60 -  b + d;
    }
    

    printf("%d %d",f,g);

    return 0;
}