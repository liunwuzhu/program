#include <stdio.h>
int main(void)
{
    int n;//上限
    int i;//处理的数
    int s;//总数
    int t;//暂存盒子
    int sum = 0;
    int sun = 0;//累加盒子和个数盒子

    scanf("%d",&n);

    for (i = 1 ; i <= n ;i++)
    //知道循环几次用for,不知道循环几次用while
    //应用循环前,可在脑中想一个数应该如何处理,循环的话只用写一个数的处理方式
    {
        s = 0;
        t = i;
            
        while (t > 0)
        {
        s = s + t % 10;
        t = t / 10;
        }
        if (s % 2 == 0)
        //判断语句用if
        {
            sun = sun + 1;
            sum = s + sum;
        }
    }
    printf("%d %d\n",sun,sum);
    return 0;
}