#include <stdio.h>
int main(void)
{
    int n,i;
    int number[101];
    scanf("%d",&n);
    for (i = 0;i < n;i++)
    {
        scanf("%d",&number[i]);
    }
        int k = 0;
        int h = 0;
        int l = number[h];
        int g = number[h];
        int min = -1;                  
        do
        {
            if( l > g )
                {
                    l = number[h++];
                    min = g;
                }
            else if( g >= l )
                {
                    g = number[h++];
                    min = l;
                }
            k++;
        } while ( k <= n );
        
        printf("%d",min);
    return 0;
}