#include <stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);


    if(a >= b && a >= c)
    {
        int i = c;
        c = a;
        a = i;
        if(a >= b)
        {
            int m = b;
            b = a;
            a = m;
        }
    }
    if(b >= a && b >= c)
    {
        int i = c;
        c = b;
        b = i;
        if(a >= b)
        {
            int m = b;
            b = a;
            a = m;
        }
    }
    if(c >= b && c >= a)
    {
        if(a >= b)
        {
            int m = b;
            b = a;
            a = m;
        }
    }


    printf("%d %d %d",a,b,c);
    return 0;
}