#include <stdio.h>
int main(void)
{
    int i,t;
    
    printf("Please enter an integer:\n");
    scanf("%d",&i);
    t = i;
    i = i - 1;
    while ( i++ < t + 10)
    {
        printf("%d\t",i);
    }
    return 0;
}