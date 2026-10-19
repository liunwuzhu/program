#include <stdio.h>
int main(void)
{
    char ch;
    int nus = 0;
    
    printf("Please enter some char:\n(enter # to quit)\n");
    while((ch = getchar()) != '#')
    {
        if(ch == '.')
        {
            printf("!");
            nus++;
        }
        else if(ch == '!')
        {
            printf("!!");
            nus++;
        }
        else
        {
            printf("%c",ch);
        }


    }
    printf("\n");
    printf("%d",nus);

    return 0;
}