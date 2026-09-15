#include <stdio.h>
int main(void)
{
    int n;

    scanf("%d",&n);
    if (n > 0)
    {
        if (n % 3 == 0)
        {
            printf("positive multiple of 3\n");
        }
        else
        {
            printf("postive not multiple of 3\n");
        }
    }
    else if(n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative");
    }
    return 0;
}