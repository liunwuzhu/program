//打印类型大小
#include <stdio.h>
int main(void)
{
    printf("type int has a size of %zd bytes.\n",sizeof(int));
    printf("type char has a size of %zd bytes.\n",sizeof(char));
    printf("type long has a size of %zd bytes.\n",sizeof(long));
    printf("type float has asize of %zd bytes.\n",sizeof(float));
    //sizeof为c语言内置运算符,以字节为单位给出指定类型的大小
    //sizeof() 返回的类型是 size_t（无符号整数）
    //%zd为匹配sizeof的转换说明

    return 0;
}