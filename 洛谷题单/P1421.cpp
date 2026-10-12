#include <stdio.h>
#define T 19
int main(void)
{
    int a,b,s;

    scanf("%d %d",&a,&b);

    s = a * 10 + b;
    printf("%d",s/T);
    return 0;
}