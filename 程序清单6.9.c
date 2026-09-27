#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    _Bool intput_is_good; 
    //_Bool只能存储1(真)0(假),,如果把其他类型的非零数值赋给_Bool类型的变量,该变量都会将其设置成 1
    //_Bool属于数据类型;
    printf("Please enter an to be summed ");
    printf("(q to quit): ");
    intput_is_good = (scanf("%ld",&num) == 1);
    while (intput_is_good)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        intput_is_good = (scanf("%ld",&num) == 1);
    }
    printf("Those integers sum to %ld.\n",sum);

    return 0;
}
//优先级比较  算术运算符 > 关系运算符(<<= 与 >>= 大于 == 和 !=) > 赋值运算符