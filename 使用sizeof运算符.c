#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof (int);
    //sizeof以字节为单位返回运算对象的大小(无符号整数类型)
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
    n,sizeof n, intsize);
    
    return 0;
}