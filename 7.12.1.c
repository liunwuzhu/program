#include <stdio.h>
int main(void)
{
    char ch;
    int kongge = 0,huanhang = 0,qita = 0;
    while((ch = getchar()) != '#')
    {
        if(ch == ' ')
        //每次调用 getchar()，就会从缓冲区吃掉一个字符
        {
            kongge++;
        }
        else if(ch  == '\n')
        {
            huanhang++;
        }
        else
        {
            qita++;
        }
    }
    printf("%d %d %d",kongge,huanhang,qita);
    
    return 0;
}