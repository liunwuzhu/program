#include <stdio.h>
void love_4 (int);

int main(void)
{
    love_4(1);
    return 0;
}

void love_4 (int n)
{
    printf("The %d time I saw you,I fell in love with you(%d)\n",n,&n);
    if(n < 4)
        love_4( n + 1 );
    printf("No mastter how many %d times reverses,I remain consistent(%d)\n",n,&n);
}