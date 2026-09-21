#include <stdio.h>
#define MAX 100
int main(void)
{
    int count = MAX + 1;

    while (--count > 0)
    {
        printf("%d bottles of spring water on the wall,"
            "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n",count - 1);
    }
    return 0;
    //递增/减运算符都有很高的优先级,只有圆括号的优先级比他们高,而且递增和递减运算符只影响一个变量
    //不要自作聪明,因为在不同系统上函数运行可能不一样,编译器可能不会按照预想的程序来运行
    //while (num < 21)
    //{
    //printf("%10d %10d\n",num,num*num++);
    //}
    //使用时确保遵守以下规则
    //1.如果一个变量出现在一个函数的多个参数中,不要对变量使用使用递增或递减运算符
    //2.如果一个变量多次出现在一个表达式中,不要对变量使用使用递增或递减运算符
}
