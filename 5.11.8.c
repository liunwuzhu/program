#include <stdio.h>
int main(void)
{
    int m = 0;
    int n = 0;
    int i;
    printf("This program computer moduli.\n");
    printf("Enter an integer to serve as the second operand:\n");
    scanf("%d",&n);
    while (m >= 0)
    {
        printf("Now enter the first operand:\n");
        scanf("%d",&m);
        i = m % n;
        printf("%d %% %d is %d\n",m,n,i);
    }
    printf("Done!");
    return 0;
}
