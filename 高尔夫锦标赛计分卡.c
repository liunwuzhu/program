#include <stdio.h>
int main(void)
{
    int jane,tarzan,cheeta;

    cheeta = tarzan = jane =68;
    //赋值从右往左进行,这对于C语言完全没问题
    printf(" cheeta tarzan jane\n");
    printf("First round score%4d %8d %8d\n",
        cheeta,tarzan,jane);

    return 0;
}