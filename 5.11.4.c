#include <stdio.h>
int main(void)
{
    double cm,feet,inch,t;

    printf("Please enter your height in cm:\n");
    scanf("%lf",&cm);
    while ( cm > 0)
    {
        feet = cm / 30.48;
        t = feet;
        feet = (int)feet;
        inch = (t - feet) * 12; 
        

        printf("%.1f cm = %.0f feet, %.1f inches\n",cm,feet,inch);
        //数据类型和转义说明,要注意相互对应;
        printf("Please enter your height in cm:(<= 0 to quit)\n");
        scanf("%lf",&cm);
    }
    printf("bye\n");
    return 0;
}