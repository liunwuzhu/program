#include <stdio.h>
int main(void)
{
    int days,week,day;
    printf("Please enter the number of days:\n");
    scanf("%d",&days);

    while ( days > 0)
    {
        week = days / 7;
        day  = days % 7;

        printf("%d days are %d weeks, %d days\n",days,week,day);

        printf("Please enter the number of days:\n");
        scanf("%d",&days);
    }
    return 0;
}