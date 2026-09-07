#include <stdio.h>
int main(void)
{
    printf("%2.2f\n", 2.345e2);
//字符宽度会被自动撑大
    printf("%c \n%c \n%c\n",'H','105','\41');
//展示字符输出
    
    return 0;
}