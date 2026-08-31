#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;
    //限定变量为只读
    printf("*%f*\n",RENT);
    //输出格式为系统默认
    printf("*%e*\n",RENT);
    //输出格式为系统默认的科学计数法
    printf("*%4.2f*\n",RENT);
    //4为最小字段宽度,即为四个字符包括小数点和小数部分
    printf("*%3.1f*\n",RENT);
    //.1表示保留一位小数
    printf("*%10.3f*\n",RENT);
    printf("*%10.3E*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    //+表示强制开启正负号
    printf("*%010.2f*\n",RENT);
    //10前的0表示用0填充而不是空格
    return 0;

}