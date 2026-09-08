//编写一个程序,提示用户输入旅行里程和消耗的汽油量,
//然后计算并显示消耗每加仑汽油形式的英里数,显示小数点后面一位数字
//接下来,使用1加仑(大约3.785升),一英里(大约1.609千米)
//把单位是英里/加仑的值转换为升/100公里,并显示结果,显示小数点后面一位数字
//注意,美国采用的方案测量消耗单位燃料的行程(值越大越好)
//而欧洲则采用单位距离消耗的燃料测量方案(值越低越好)
//使用#define常见符号常量或使用const限定符创建变量来表示转换系数

#include <stdio.h>
#define LITER 3.785
#define KM    1.609 
int main(void)
{
    float mile,km,gallon,liter,a,b;
    
    printf("Please enter the mileage you traveled and the amount of gas you consumed:\n");
    scanf("%f %f",&mile,&gallon);
    a = mile / gallon;
    printf("It get %.1f miles per gallon\n",a);
    b = mile * KM / gallon * LITER;
    printf("It get %.1f km per liter\n",b);

    return 0;
}