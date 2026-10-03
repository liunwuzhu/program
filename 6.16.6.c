#include <stdio.h>
int main(void)
{
    int m,n,i,j;

    printf("Please enter two number:\n");
    scanf("%d %d",&m,&n);
    for (i = m; i <= n;i++)
    {
        printf("%5d%5d%5d",i ,i * i,i * i * i);
        printf("\n");
    }
}