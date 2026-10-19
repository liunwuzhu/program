#include <stdio.h>
#define SPACE ' '
int main(void)
{
    char ch;


    ch = getchar();//从缓存区获得一个字符并赋值给ch;
    while(ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();//获取下一个字符
    }
    putchar(ch);//当ch等于换行符时退出循环,输出换行符

    return 0;
}