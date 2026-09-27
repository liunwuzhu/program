#include <stdio.h>
int main(void)
{
    const int NUMBER = 22;
    int count;
    
    for(count = 1; count <= NUMBER;count++)
    /*
    每一个分号分割了一个完整的表达式,在执行下一个表达式之前会将前一个表达式执行完毕
    圆括号中有三个表达式,分别用两个分号分开,
    第一个表达式是初始化,只会在开始时执行一次
    第二个表达式是测试条件,在执行循环之前对表达式求值,如果表达式为假,循环结束
    第三个表达式是执行更新,在每次循环结束时求值
    */    
    printf("Be my Valentine!\n");

        return 0;
}