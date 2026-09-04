#include <stdio.h>
int main(void)
{
    int n;

    printf("please enter three integers:\n");
    scanf("%*d %*d %d",&n);
    printf("The last integer was %d\n",n);

    return 0;
}