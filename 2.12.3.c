#include <stdio.h>//计算18岁活了多少天的程序
int 年龄,年,天数;
int main(void)
{
    年龄 = 18;
    年   = 365;
    天数 = 年龄 * 年;

    printf("你%d岁啦\n你已经出生%d天啦\n",年龄,天数);

    return 0;
}


