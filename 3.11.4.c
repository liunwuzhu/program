//读取浮点数,并打印出不同的形式
#include <stdio.h>
#include <windows.h>
int main(void)
{
    SetConsoleOutputCP(65001);

    float a;

    printf("请输入一个实数:");
    scanf("%f",&a);
    printf("浮点数表示为%f",a);
    printf("指数表示为%e",a);
    //用%e表示输出指数的占位符
    printf("十六进制表示%a",a);
    //用%a表示输出十六进制的占位符
    //只有同类型才可转换
    //例如浮点数转换成八进制或六进制
    //但是浮点数转换为整数类型会出错,因为类型不同

    return 0;

}