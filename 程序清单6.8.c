//误用=会导致无限循环
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld",&num);
    //如果scanf()读取指定形式时失败了,它把失败值留在缓存区内,在下次读取时重新读取缓存值内的失败值
    while (status = 1)
    //应该用==判断,简化也可以直接将scanf()搬入while()函数中;
    //可以写成 1 == status,避免写错;
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld",&num);
    }
    printf("Those integers sum to %ld.\n",sum);

    return 0;
}
