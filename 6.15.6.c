#include <stdio.h>
int main(void)
{
    int m,n,i;

    for (m = 1; m <= 4; m++)
    {
        for(n = 1; n <= 8; n++)
            printf("$");
        
        printf("\n");
    }
    return 0;
}