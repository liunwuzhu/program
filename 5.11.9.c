#include <stdio.h>
void Temperatures(double n);
int main(void)
{
    double F;
    printf("Please enter one temperatures in F\n");
    while (scanf("%lf",&F) == 1)
    {
        Temperatures(F);
    }

}

void Temperatures(double n)
{
    const  double a = 273.16;
    double C,K;

    C = 5.0 / 9.0 * (n - 32.0);
    K = C + a;
    printf("F = %f C = %f K = %f\n",n,C,K);

}
