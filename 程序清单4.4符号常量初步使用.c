//在披萨饼程序中使用已定义的常量
#include <stdio.h>
#define pi 3.1415
//定义字符常量
//define还可以定义字符常量和字符串常量,前者用单引号,后者用双引号
//切记不要加 =
//与之相像的是限定符const,用于限定一个变量为只读(在程序运行过程中不改变其值)
int main(void)
{
    float area,circum,radius;
    printf("what is the radius of your pizza?\n");
    scanf("%f",&radius);
    area = pi * radius * radius;
    circum = 2.0 * pi * radius;
    printf("your basic pizza parameters are as folows:\n");
    printf("circumference = %1.2f, area = %1.2f\n",circum,area);
    //%1.2f意思是将结果四舍五入为两位小数(保留两位小数就是四舍五入至小数点后两位)

    return 0;


}