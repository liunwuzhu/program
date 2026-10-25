
#include <stdio.h>
int main(void)
{
    int k,n,m;
    int num = 0,sum = 0;
    scanf("%d",&k);
    for(n = 1;;n++)
    {
        for(m = 0;m < n;m++)
        {
            num += n;
            sum++;
        if(sum == k)
        {
            printf("%d",num);
            return 0;            
        }
        }
    }
}

/*
#include <stdio.h>
int main(void)
{
    int k,d;
    int left = 1;
    int coins = 1;
    int num = 0;

    scanf("%d",&k);
    for(d = 0;d < k;d++)
    {
        num += coins;
        if(--left == 0)
        {
            coins++;
            left = coins;
        }
    }
    printf("%d",num);
    return 0;
}
*/