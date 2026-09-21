#include <stdio.h>
int main(void)
{
    int a = 1,b = 1;
    int a_post, pre_b;

    a_post = a++;
    //后缀: 使用a的值之后,递增a
    pre_b  = ++b;
    //前缀: 使用b的值之前,递增b
    //单独使用即  ego++,使用哪种都没关系,
    //但是如果是复杂的有区别,建议使用前缀
    printf("a a_pst  b  pre_b \n");
    printf("%ld %5d %5d %5d\n",a, a_post, b, pre_b);

    return 0;
}