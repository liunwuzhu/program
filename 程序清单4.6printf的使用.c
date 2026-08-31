//使用转换说明
//注意文件名称里面不能带函数如printf()会导致编译出错
#include <stdio.h>
#define PI 3.1415926
int main(void)
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies .\n",number,pies);
    //格式为printf(格式字符串,待打印项1,待打印项2,......);括号内即为参数
    //待打印项可以是变量,常量,甚至是计算式
    //格式字符串是双引号括起来的内容
    printf("The value of pi is %f .\n",PI);
    //定义可以直接通过转移序列输出来
    printf("farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n", '$', 2 * cost);
    //可以直接像如此输出字符
    //转换说明与字符串要一一对应
    return 0;
}
