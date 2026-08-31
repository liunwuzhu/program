//用Ascii码输出字符
#include <stdio.h>
int main(void)
{

    int a;

    printf("请输入一个ASCII码值");
    printf("___\b\b\b");
    //\b是活动区(光标)退格的意思
    scanf("%d",&a);
    //&是取地址的意思,
    //scanf()要求用户输入一个值并记录
    printf("这个%dASCII的码对应的符号是%c",a,a);
    //%d是对于整数的转换说明,%c是对于符号的转换说明

    return 0;

}