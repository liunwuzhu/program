#include <stdio.h>
int main(void)
{
    int ou = 0,ji = 0,num = 0,nus = 0;
    int m;
    while(scanf("%d",&m) == 1)
    {
        if(m <= 0)
        {
            break;
        }
        else if( m % 2 == 0)
        {
            ou += m;
            num++;
        }
        else
        {
            ji += m;
            nus++;
        }
    }
    if(num == 0 || nus == 0)
    {
        printf("please again enter/Or please enter a number that contains both odd and even digits\n");
    }
    else
    {
    printf("The number of even numbers you entered and their average are:%d %.2f\n",num,(double)(ou/num));
    printf("The number of odd numbers you entered and their average are:%d %.2f\n",nus,(double)(ji/nus));
    }
    return 0;
}