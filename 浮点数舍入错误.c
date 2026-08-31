#include <stdio.h>
int main(void)
{
    float a,b;
    //float的精度只有总数(从非零开始计算)六,七位
    //计算太大的数会发生错误

    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f\n",a);

    return 0;

}
