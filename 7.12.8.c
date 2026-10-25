#include <stdio.h>
#define FIRST 300
#define SECOUNF 450
#define F_SAX 0.15
#define S_SAX 0.20
#define T_SAX 0.25
int main(void)
{
    int hour,select;
    double sax,sum,n_incom,Y_SALARY;
    printf("Please select your work salary:\n");
    printf("1) $8.75/hr");
    printf("               2) $9.33/hr\n");
    printf("3) $10.00/hr");
    printf("               4) $11.20/hr\n");
    printf("quit\n");
    scanf("%d",&select);
    switch (select)
    {
        case 1 :
            Y_SALARY = 8.75;
            break;
        case 2 :
            Y_SALARY = 9.33;
            break;
        case 3 :
            Y_SALARY = 10.00;
            break;
        case 4 :
            Y_SALARY = 11.20;
            break;
    }
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
        else if(sum <= SECOUNF && sum > FIRST)
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
