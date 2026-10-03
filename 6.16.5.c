#include <stdio.h>
int main(void)
{
    int m,i,h,j,f;
    char n,k,l;

    printf("Please enter capital:\n");
    scanf("%c",&n);
    i = n;
    i = i - 64;
    for (m = 1; m <= i ; m++)
    {
        for(h = 1;h <= (i - m); h++)
        {
            printf(" ");
        }
        for(j = 1;j < m;j++)
        {
            printf("%c",'A' + j - 1);
        }
        for(f = 1;f <= m;f++)
        {
            printf("%c",'A' + m - f);
        }
        printf("\n");
    }
}