#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
    const double SCALE = 0.333;
    double shoe,foot;

    printf("Shoe size (men's)  foot length\n");
    shoe = 3.0;
    //初始值被设置在循环的外侧
    while (shoe < 18.5)
    //"()"内为循环的条件,表示若条件为真,循环则会一直进行
    //若条件为假则会跳出循环运行下一个语句
    {
    //使用花括号表示循环的范围    
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n",shoe,foot);
        shoe = shoe + 1.0;
        //赋值时从右往左进行
        //等号左侧必须是一个变量名
        //更新循环变量
        //可修改左值(数据对象) = 右值或左值    
    }
    //花括号及其被扩起来的部分被称为块
    printf("If the shoe fits,wear it.\n");
    
    return 0;
}