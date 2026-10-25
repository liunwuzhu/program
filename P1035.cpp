#include <stdio.h>
int main(void)
{
    int k,n = 0;
    double Sn;
    scanf("%d",&k);
    Sn = 0.0;    
    do
    {
        n++;
        Sn = 1.0/n + Sn;
    }while(Sn <= (double)k);
    printf("%d",n);

    return 0;
}