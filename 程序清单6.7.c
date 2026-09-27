#include <stdio.h>
int main(void)
{
    int n = 3;

    while (n)
        printf("%2d is ture\n",n--);
    printf("%2d is false\n",n);

    n = -3;
    while (n)
    //除了0是假值外,其他都是真值
    //但是关系表达式为真,求值为1,关系表达式为假,求值为0;
        printf("%2d is ture\n",n++);
    printf("%2d is false\n",n);

    return 0;
}