#include <stdio.h>
int main(void)
{
    int m,h;
    char n,i;

    for(m = 0;m <6;m++)
    {
        for(h = 0,n = ('A' + m + h);i = ('A' + m),n <= (i + m); n++,h++)
        //看输出的影响因素是谁,将影响因素计入后面的变量中;
        //既然循环的条件容易写错,就给它摘出来
        {
            printf("%c",n);
        }
        printf("\n");
    }
}
/*
#include <stdio.h>
int main(void)
{
    int m;
    char n;
    for(m = 0; m < 6; m++)
    {
        //起始字符 = 'A'+m，结束字符 = 'A'+2*m
        char start = 'A' + m;
        char end   = 'A' + 2*m;
        for(n = start; n <= end; n++)
        {
            printf("%c", n);
        }
        printf("\n");
    }
    return 0;
}

思路：给每一行算出：该行从哪个字符开始、到哪个字符结束
第 m 行，起始字符：start = 'A' + m
第 m 行，结束字符：end = 'A' + 2*m
每行字符数量：end - start + 1 = m+1 个字符
*/