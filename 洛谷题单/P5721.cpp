#include <stdio.h>
int main(void)
{
    int n;
    int cut = 1;
    scanf("%d",&n);
    for (int i = 0;i < n;i++)
    {
        for(int k = i;k < n;k++)
        {
            printf("%02d",cut);
            cut++;
        }
        printf("\n");
    }
    return 0;
}