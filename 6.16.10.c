#include <stdio.h>
int main(void)
{
    int m,n,i,sum;
    
    printf("Enter lower and upper integer limits:\n");

    while (scanf("%d %d",&m,&n) == 2)
    {
        sum = 0;
        while ( m != n)
    {
        for(i = m;i <= n;i++)
        {
            sum = sum + i * i;
        }
    printf("The sums of the squares form %d to %d is %d",m,n,sum);
    }
    
    }
    
    
    printf("Done!\n");
    return 0;
}