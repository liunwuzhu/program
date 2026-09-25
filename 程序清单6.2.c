#include <stdio.h>
int main(void)
{
    int n = 5;

    while ( n < 7 )
    //想要进入循环,刚开始条件必须满足循环条件;
    //测试条件,当循环中的量出现假值时循环才会停止,若判断条件不改变,循环会一直进行;
    {
        printf("n = %d\n",n);
        n++;
        printf("Now n = %d\n",n);

    }
    printf("The loop has finished.\n");

    return 0;
}