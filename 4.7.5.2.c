#include <stdio.h>
#define BOOK "war and pance"
int main(void)
{
    float cost = 12.99;
    float percent = 80.0;

    printf("This copy of \"%s\" sells for $%.2f.\n",BOOK
        ,cost);
    printf("that percent %.0f%% of list.\n",percent);

    return 0;
}