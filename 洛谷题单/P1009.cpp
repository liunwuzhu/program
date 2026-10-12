#include <stdio.h>
long long jc(int n);
int main(void)
{
    int n;
    long long S = 0;
    scanf("%d",&n);
    for (int i = 1;i <= n;i++)
    {
        S = S + jc(i);
    }
    printf("%lld\n",S);
    return 0;
}
long long jc(int n)
{   
    long long cj = 1;
    for(int i = 1;i <= n;i++)
        {
            cj = cj * i;  
        }
    return cj;
}