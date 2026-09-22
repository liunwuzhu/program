//自动转换类型
#include <stdio.h>
int main(void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c,i = %d,fl = %2.2f\n",ch,i,fl);
    ch = ch + 1;
    i = fl + 2 * ch;
    fl = 2.0 * ch + 1;
    printf("ch = %c,i = %d,fl = %2.2f\n",ch,i,fl);
    ch = 1107;
    printf("Now ch = %c\n",ch);
    ch = 80.89;
    printf("Now ch = %c\n",ch);
    //为了运算正常进行,会持续的将不同类型的数据进行升级降级进行转换以方便进行计算
    //也可以使用强制类型转换符,使用方法如下
    //int mice;
    //mice = (int)1.6 + (int)1.7;//1.6转换成整数会被截断成 1;
    //mice = 1.6 + 1.7 ;//加为3.3会被截断成 3;
    return 0;
}