//字段宽度,使用修饰符和标记
#include <stdio.h>
#define PAGES 959
int main(void)
{
    printf("*%d*\n",PAGES);
    //正常格式
    printf("*%2d*\n",PAGES);
    //默认打印两个字段,超过时自动扩大
    printf("*%10d*\n",PAGES);
    //打印十个字段,包括空格和数字,从右侧开始打印
    printf("*%-10d*\n",PAGES);
    //从左侧开始打印
    return 0;
}