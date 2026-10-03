#include <stdio.h>
int main(void)
{
    int m,i,h,j,f;
    char n,k,l;

    printf("Please enter capital:\n");
    scanf("%c",&n);
    i = n;
    i = i - 64;
    //涉及ASCII码可以记住A是65
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
    //将要执行的任务划成一个个独立的部分和区块,观察想要达到的效果都与哪些变量有关
}