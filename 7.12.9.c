#include <stdio.h>
int main(void)
{
    int n,i;
    scanf("%d",&n);
    while(n < 0)
    {
    printf("Please enter positive:\n");
    scanf("%d",&n);                
    }
    for(i = 1;i <= n;i++)
    {
        if(i == 2)
        {
            printf("%3d",i);
        }
        else if(i == 3)
        {
            printf("%3d",i);
        }
        else if(i == 5)
        {
            printf("%3d",i);
        }
        else if(i == 7)
        {
            printf("%3d",i);
        }
        else if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
            printf("%3d",i);
        }
    }

    return 0;
}