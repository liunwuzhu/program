//计算水分子数
#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001);
    
    double watter;//双精度
    double count;

    printf("请以千克输入水的质量:");
    scanf("%lf",&watter);
    //double的读入是%lf而float是%f
    //而输出都是%f
    count = watter * 1000 / 3.0e-23;

    printf("该重量的水分子共有%le个水分子",count);

    return 0;

}
