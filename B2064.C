#include <stdio.h>
int main(void)
{
    int n,a;
    char fib [31];

    fib [1] = 1;
    fib [2] = 1;
    for (int i = 3;i <= 30;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    scanf("%d",&n);

    for (int i = 0;i <=n,i++)
    {
        
    }
}