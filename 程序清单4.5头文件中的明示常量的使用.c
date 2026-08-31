//使用limit.h和float头文件中定义明示常量
#include <stdio.h>
#include <limits.h>
//整数限制
#include <float.h>
//浮点数限制
int main(void)
{
    printf("some number limits for this system");
    printf("Biggest int: %d\n",INT_MAX);
    //字符常量int类型的最大值
    printf("Smallest long long: %lld\n",LLONG_MIN);
    //long long类型的最小值
    printf("one byte = %d bits on this system.\n",CHAR_BIT);
    //char类项的位数
    printf("Largest double: %e\n",DBL_MAX);
    //双精度浮点类型能表示的最大有限值
    printf("SMallest normal float: %e\n",FLT_MIN);
    //保留全部精度的float类项的最小正数
    printf("float precision = %d digit\n",FLT_DIG);
    //float类项最少有效数字位数(十进制)
    printf("float epsilon = %e\n",FLT_EPSILON);
    //1.00和比1.00大的最小float类型最小数
    return 0;
}