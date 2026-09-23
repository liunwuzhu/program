#include <stdio.h>
int main(void)
{
    int count,sum,i;

    printf("How many days do you hope to work?\n");
    scanf("%d",&i);
    count = 0;
    sum = 0;
    while (count++ < i)
    sum = sum + count * count;
    printf("If the money you earn in a day is"
    "the total amount of previous day square\n");
    printf("The money you can earn is = %d\n",sum);

    return 0;
}