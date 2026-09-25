//注意分号的位置
#include <stdio.h>
int main(void)
{
    int n = 0;
    int num;

    while  (n++ < 3);
    //及时while语句本身使用复合语句,在语句构成上,它也是一条单独的语句,该语句从while开始执行,到第一个分号结束
    /*在使用了复合语句的情况下,到右花括号才会结束*/
    /*测试条件后面单独的分号是空语句*/
    printf("That's all this program does.\n");

    return 0;
}