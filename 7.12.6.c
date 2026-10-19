#include <stdio.h>
int main(void)
{
    int num = 0;
    char ch;
    char cn = '#';
    while((ch = getchar()) != '#')
    {
        if(cn == 'e')
        {
            if(ch == 'i')
            {
                num++;
            }
        }
        cn = ch;

    }
        printf("%d",num);
        return 0;
}