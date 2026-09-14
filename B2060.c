#include <stdio.h>
int main(void)
{
    int m,n;
    int sum = 0;

    scanf("%d %d",&m,&n);
    for (int i = m; i <= n;i++)
    {
        if (i % 17 == 0)
        {
            sum = sum + i;
        }
        
    }
    printf("%d\n",sum);
    
    return 0;
}