#include <stdio.h>
#define MIN 60
int main(void)
{
    int times,hour,min;

    printf("Please enter a time in minutes:\n");
    scanf("%d",&times);

    while ( times >  0)
    {
        hour = times / MIN;
        min = times % MIN;

        printf("%dhour %dmin\n",hour,min);

        printf("Please enter a time in minutes:\n");
        scanf("%d",&times);
    }
    return 0;
}