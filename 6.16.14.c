#include <stdio.h>
#define EIGHT 8
int main(void)
{
    double a[EIGHT],b[EIGHT];
    int m,n,i;

    printf("Please enter 8 number:\n");
    for (m = 0;m < EIGHT;m++)
    {
        scanf("%ld",&a[m]);
    }
    
    for (n = 0; n < EIGHT;n++)
    {
        for(i = 0,b[n] = 0; i < n + 1;i++)
        {
            b[n] = b[n] + a[i] ;
        }
    }
    for (n = 0;n < EIGHT;n++) 
    {
        printf("%5d",a[n]);
    }
    printf("\n");
        for (n = 0;n < EIGHT;n++) 
    {
        printf("%5d",b[n]);
    }
    
    return 0;
}