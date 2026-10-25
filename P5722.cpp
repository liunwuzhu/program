#include <stdio.h>
int main(void)
{
    int n,m;
    int num = 0;

    scanf("%d",&m);
    for(n = 1;n <= m;n++)
    {
        num += n;
    }
    printf("%d",num);
    return 0;
}