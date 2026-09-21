//几种常见的语句
#include <stdio.h>
int main(void)
{
    int count,sum;

    count = 0;
    sum = 0;
    while (count++ < 20)
    sum = sum + count;
    //当while()只有一条语句的时候可以不用花括号
    //while语句是一种迭代语句
    //序列点(分割完整表达式)是程序执行的点,在该点上,所有的副作用都在进入下一步之前发生
    //完整表达式是指这个表达式不是另一个更大的表达式的子表达式
    printf("sum = %d\n",sum);

    return 0;
}