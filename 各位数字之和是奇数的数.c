#include <stdio.h>
int main(void)
{
int n,i,t,s;
int sut = 0;
int max = 0;

scanf("%d",&n);

    for(i = 1;i <= n; i++)
    {
        s = 0;
        t = i;
        while(t > 0)
        {
            s = s + t % 10;
            t = t / 10;
        }
        if(s % 2 != 0)
        //符合条件的才能进来
        {
            sut = sut + 1;
            max = i;
        }
        
    }
    printf("%d %d\n",sut,max);
    return 0;
}