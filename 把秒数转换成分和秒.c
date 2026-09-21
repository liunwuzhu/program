#include <stdio.h>
#define SEC_PER_MIN 60
//宏定义无内存空间,不能被修改,只能在程序开始时将指定值给替换
int main(void)
{
    int sec, min , left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf("%d",&sec);
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        //会使两个整数相除,只保留结果的整数部分,然后舍弃小数
        left = sec % SEC_PER_MIN;
        //求模运算符用于整数运算,不能用于浮点数,求模运算符给出其左侧整数除以右侧整数的余数
        //如果第一个运算结果是正数则求模结果也是正数,如果是负数,求模结果也是负数;
        printf("%d seconds is %d minutes, %d seconds.\n",sec
        ,min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d",&sec);
        //可以使程序循环运行
    }
    printf("Done!\n");

    return 0;
}