#include <stdio.h>
#include <math.h>
double result(double i,double j);
//声明函数参数时要确定参数的类型
int main(void)
{   
    double i,j;
    while(printf("PLease enter two floatingpoint numbers:\n"),
    scanf("%lf %lf",&i,&j) == 2)
    {
        printf("%15f\n",result(i,j));
    }

    return 0;
}

double result(double i,double j)
{

    double m;
    m = fabs(i - j)/(i * j);

    return m;
    
}
//要对自定义函数功能部分有清晰的划分
//若函数有返回值要求,结尾一定要把写return
/*
1. 循环是【功能的一部分】→ 循环放进自定义函数
比如：求数组总和、冒泡排序、字符串反转、统计字符个数，这些任务天然需要循环遍历。
2. 循环只是【反复调用功能】→ 循环留在 main
比如：循环多次输入，每次调用函数做一次计算。
*/