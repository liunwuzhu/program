//编写一个程序,将一个double类型的变量设置为1.0/3.0,一个float类型的变量设置为1.0/3.0
//分别显示两次计算结果个三次;一次显示小数点后面六位,一次显示小数点后面12为数字;一次显示小数点后面16为硕子
//程序中要包含float.h头文件,并显示FLT_DIG和DBL_DIG的值.
//1.0和3.0这些值一致嘛
#include <stdio.h>
#include <float.h>
int main(void)
{
    float a = 1.0 / 3.0;
    double b = 1.0 / 3.0;
    printf("float\n%.6f\n%.12f\n%.16f\n",a,a,a);
    printf("double\n%.6f\n%.12f\n%.16f\n",b,b,b);
    printf("%d\n%d\n",FLT_DIG,DBL_DIG);

    return 0;
}