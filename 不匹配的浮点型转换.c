//转换说明出现错误的原因
#include <stdio.h>
int main(void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);
    printf("%ld %ld\n",n3,n4);
    printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);
    
    //转换说明匹配出现错误的原因是:
    //不同转换说明所取用的内存不同,储存不同形式的数据所使用的内存也不同,如果错用则会发生错误
    return 0;
}