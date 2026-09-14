#include <stdio.h>
int main(void)
{
    int m,n;
    int num = 0;

    scanf("%d %d",&m,&n);
    for (int i = m; i <= n;i++)
    {
        if (i % 3 == 0 && i % 5 !=0)
        {
            num = num + i;
        }
    }
    printf("%d",num);
    return 0;
}