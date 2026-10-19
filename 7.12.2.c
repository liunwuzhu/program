#include <stdio.h>
#define EIGHT 8
int main(void)
{
    char m;
    int num = 0;
    printf("Please enter some char:\nEntre # to quit:\n");
    while((m = getchar()) != '#')
    {
        if(m == ' ')
        {
            printf("");
        }
        else if(m == '\n')
        {
            printf("\n");
        }
        else
        {
        printf(" %c-%d ",m,m);
        num++;
        }
        if(num % EIGHT == 0)
        {
            printf("\n");
        }
    }
    return 0;
}