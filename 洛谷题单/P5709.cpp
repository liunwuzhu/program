#include <stdio.h>
int main(void)
{
    int m,t,s,h,n;
    
    scanf("%d %d %d",&m,&t,&s);
    if(t == 0)//==判断
    {
        printf("0\n");
    }
    else
    {
        if (s % t == 0)
            n = s / t;
        else
            n = s / t + 1;
        
        h = m - n;
        if(h < 0)
            h = 0;
        printf("%d",h);
    }
    return 0;
}