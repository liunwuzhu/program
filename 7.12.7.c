#include <stdio.h>
#define FIRST 300
#define SECOUNF 450
#define F_SAX 0.15
#define S_SAX 0.20
#define T_SAX 0.25
#define Y_SALARY 10.00
int main(void)
{
    int hour;
    double sax,sum,n_incom;
    printf("Please enter your work hour:\n");
    while(scanf("%d",&hour) == 1)
    {
        if(hour <= 40)
        {
            sum = (double)hour * Y_SALARY;
        }
        else
        {
            sum = (((double)hour - 40.0) * 1.5 + 40.0) *  Y_SALARY;
        }    
        if(sum <= FIRST)
            {
                sax = sum * F_SAX;
            }
        else if(sum <= SECOUNF && hour > FIRST)
            {
                sax = ((sum - FIRST) * S_SAX + FIRST * F_SAX);
            }
        else if(sum > SECOUNF)
            {
                sax = ((sum - SECOUNF) * T_SAX + (SECOUNF - FIRST) * S_SAX + F_SAX * FIRST);
            }
        n_incom = sum - sax;
            printf("%5.2f\n%5.2f\n%5.2f\n",sum,sax,n_incom);
    }
    return 0;
}