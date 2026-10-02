#include <stdio.h>
int main(void)
{
    int m,n;

    for (m = 1;m <= 6;m++)
    {
        for (n = 1;n <= m;n++)
        {
            printf("%c",'G' - n);
        }
        printf("\n");
    }
    return 0;
}