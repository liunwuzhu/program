//处理整数上溢和浮点数上/下溢
#include <stdio.h>
int main(void)
{
    int a = 1234567890987654321;
    //最多保存前十位
    float b = 2.0e30f;
    //精度只有六位
    float c = 2.0e-60f;

    printf("整数上溢是这样的%d,而浮点数上溢是这样的%F,下溢是这样的%F",a,b,c);

    return 0;
}
