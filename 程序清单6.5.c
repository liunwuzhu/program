#include <stdio.h>
#include <math.h>
int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?\n");
    scanf("%lf",&response);
    while (fabs(response - ANSWER) > 0.0001)
    //fabs() 是取结果的绝对值
    {
        printf("Try again!\n");
        scanf("%lf",&response);
    }
    //循环会一直提示用户输入,直至输入正确值
    //因此循环设计可以以目的为条件,当不符合条件即一直进行循环;
    printf("Close engough!\n");

    return 0;
}