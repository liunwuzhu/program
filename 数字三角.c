#include <stdio.h>
int main(void)
{
    int n,i,j;//总行 第几行 几个

    scanf("%d",&n);
    for (i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= n - i + 1;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}