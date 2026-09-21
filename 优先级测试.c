#include <stdio.h>
int main(void)
{
    int top, score;

    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d, score = %d\n",top,score);
//先算括号内的...不解释了,与小学学的运算顺序一样
    return 0;
}