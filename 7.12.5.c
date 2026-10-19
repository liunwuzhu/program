#include <stdio.h>
int main(void)
{
    char ch;
    int nus = 0;
    
    printf("Please enter some char:\n(enter # to quit)\n");
    while((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.' :
            printf("!");
            nus++;                    
            break;
        case '!' :
            printf("!!");
            nus++;
            break;
        default  :
            printf("%c",ch);
        }
    }
    printf("\n");
    printf("%d",nus);

    return 0;
}