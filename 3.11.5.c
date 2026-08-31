//将年龄转化为秒数
#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001);

    long years;

    printf("请输入你的年龄:");
    scanf("%d",&years);
    printf("你现在已经活了%.0f秒了",years*3.156e7);
    //%f是单精度浮点数.0表示保留小数点后零位

    return 0;


}