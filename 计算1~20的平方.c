#include <stdio.h>
int main(void)
{
    int num = 1;

    while (num < 21)
    {
        printf("%4d %6d\n",num,num *num);
        num = num + 1;
        //可以通过乘法运算符进行指数运算
    }
    return 0;
}