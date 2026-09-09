//麦棋问题
//while的循环在指数运算中的作用
#include <stdio.h>
#define SQUARES 64
int main(void)
{
    const double CROP = 2E16;
    double current, total;
    int count = 1;

    printf("%4s %13s %12s %12s\n", "Square", "Grains_Added", "Total", "Fraction");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n",count,current,
        total,total / CROP);
    while (count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n",count,current,
            total,total / CROP);

    }
    printf("That's all.\n");
    
    return 0;
}

