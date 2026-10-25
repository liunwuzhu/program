#include <stdio.h>
int main(void)
{
    int apple;
    scanf("%d",&apple);
    if(apple <= 1 && apple >= 0)
        {
            printf("Today, I ate %d apple.",apple);
        }
    else if (apple > 1)
        {
            printf("Today, I ate %d apples.",apple);
        }

    return 0;
}