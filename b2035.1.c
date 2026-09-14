#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    if (n > 0)
    {
        if (n % 2 == 0)
        {
            printf("positive even\n");
        }
        else
        {
            printf("positive odd");
        }
        
    }
    else if (n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return 0;
}