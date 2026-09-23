#include <stdio.h>
void c(int n);
//函数声明如果有参数要写参数;
int main(void)
{
    int m;
    printf("Please enter a number and I will output its cube:\n");
    while( m != 0)
    {
        scanf("%d",&m);
        c(m);
        printf("Please enter a number and I will output its cube:\n");
    }
    printf("buy");
    return 0;
}

void c(int n)
{
    printf("%d\n",n * n * n);
}