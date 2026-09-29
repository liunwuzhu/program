//将计算的内容单独划分了一个模块(函数)
#include <stdio.h>
double power (double n,int p);
int main(void)
//该示例中的main()是一个驱动程序,即被设计用来测试函数的小程序
{
    double x,xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\n the number will be raised. Enter q");
    printf("to quit.\n");
    while (scanf("%lf%d",&x,&exp) == 2)
    //scanf()的返回值 = 本次成功读到的数据个数
    {
        xpow = power(x,exp);
        //返回值将被赋给xpow值
        printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
        printf("Enter next pair of numbers or q to quit.\n");

    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n,int p)
//这里的参数 n和参数p的意思是说,一会调用它的时候写成pow(1.2,3)的时候会将1.2赋给n,将3赋给p
{
    double pow = 1;
    int i;

    for (i = 1;i <= p;i++)
        pow *= n;

        return pow;
}