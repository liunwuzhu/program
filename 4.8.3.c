//编写一个程序,读取一个浮点数,首先以小数点计数法打印,然后再以指数计数法打印,
//用下面的格式进行输出
#include <stdio.h>
int main(void)
{
    float number;
    printf("Please enter a floating point number:\n");
    scanf("%f",&number);
    printf("The input is %.1f or %.3e\n",number,number);
    printf("The input is %+.3f or %.3E\n",number,number);

    return 0;
}