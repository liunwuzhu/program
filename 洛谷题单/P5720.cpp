#include <stdio.h>
int main(void)
{
    double a;
    int b = 2000;//循环多少次不知道可以用while循环,代码更少
    int cut = 0; 

    scanf("%lf",&a);
    for (int i = 0;i < b;i++)
    {
        a = a * (1.0/2.0);//由于截断问题,这里应该是使用浮点数;
        cut++;        
        if (a < 1)
            {
                break;
            }
    }
    printf("%d",cut);
    return 0;
}