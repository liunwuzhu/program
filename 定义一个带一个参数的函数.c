#include <stdio.h>
void pound(int n);
//是函数原型也是函数声明
//声明参数就创建了被称为形式参数的变量,简称形参,函数调用传递的值为实际参数,简称实参
//我们可以说形参是变量,实参是函数调用的提供的值
//void pound(int n)
//pound(times)就是把times的值赋给n,形参就是n,实参就是times

int main(void)
{
    int times = 5;
    char ch = '!';
    float f = 6.0;

    pound(times);
    pound(ch);
    //会自动将字符转换成整数类型
    pound(f);

    return 0;
}
//变量名为函数私有,意思是在不同的函数中可以使用相同的函数名;

void pound(int n)
//必要情况需要需要在()内加入参数
{
    while (n-- > 0)
    printf("#");
    printf("\n");
}
