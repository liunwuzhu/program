//演示与用户交互
#include <stdio.h>
#include <string.h>
//提供strlen()原型
#define DENSITY 62.4
//人体密度(单位:磅/立方英尺)把字符常量定义为一个数
int main(void)
{
    float weight,volume;
    int size,letters;
    char name[40]; 
    //name是一个容纳40个字符的数组,最后一定得\0结束,所以这个只能存储39个字符
    printf("Hi what's your first name?\n ");
    scanf("%s",name);
    //用%s来处理"字符串"的输入和输出
    //这里没有&,因为数组名本身也是内存地址
    //%s读空格就停下来
    printf("%s,what's your weight in pounds?\n",name);
    scanf("%f",&weight);
    size = sizeof(name);
    //sizeof()相当于量一下数组的总容量,这个是属于运算符
    letters = strlen(name);
    //用strlen()来获取字符串的实际长度,不包括结束标签
    //strlen()是一个函数,必须有头文件
    volume = weight / DENSITY;
    printf("WELL,%s,your volume is %2.2f cubic feet.\n",name,volume);
    //第一个2代表总宽度至少两位(超过会自动扩展)
    printf("Also,your first name has %d letter,\n",letters);
    printf("and we have %d bytes to store it.\n",size);
    
    return 0;
}