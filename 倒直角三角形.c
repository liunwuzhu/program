#include <stdio.h>
int main(void)
{
    int i,j;


    scanf("%d",&i);

    for (int n = 1;n <= i;n++)
    {
        for (j = 1;j <= i - n + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}