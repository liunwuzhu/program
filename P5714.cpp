#include <stdio.h>
#define LIGHT 18.5
#define HEAVY 24
int main(void)
{
    double weight,height,Bim;
    
    scanf("%lf %lf",&weight,&height);
    Bim = weight / (height * height); 
    if(Bim < LIGHT)
    {
        printf("Underweight");
    }
    else if(Bim >= LIGHT && Bim < HEAVY )
    {
        printf("Normal");
    }
    else
    {
        printf("%g\nOverweight\n",Bim);
    }
    return 0;
}