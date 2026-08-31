//使用不同类型的字符串,sizeof()和strlen()的对比使用
#include <stdio.h>
//这个头文件包括标准输入和输出函数
#include <string.h>
//这个头文件中包含多个与字符串相关的函数原型
#define PRAISE "You are an extraordinary being."
//用双引号扩起来的是个字符串
//#define是属于预处理器的,注意格式没有等号,可以用这个来定义符号常量,一般符号常量名有大写惯例
//首字不能为数字
int main(void)
{
    char name[40];
    
    printf("what's your name?");
    scanf("%s",name);
    //scanf()只会读取字符串中的一个单词,遇到空格,制表符,换行符就停止了
    printf("hello,%s.%s\n",name,PRAISE);
    //用%S可以直接输出定义的字符
    printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),
    sizeof name);
    //sizeof是一个运算符,对应的转换说明是%zd,该转换说明对strlen()同样适用,返回类型为无符号整型
    //sizeof的圆括号使用与否取决于对象,类型需要圆括号,特定量可以不用圆括号,不过能带就带
    printf("The phrase of praise has %zd letters",strlen(PRAISE));
    //strlen()得出来数的包括空格和标点符号,但不包括结尾的空字符
    printf("and occupies %zd memory cells.\n",sizeof PRAISE);
    //sizeof会将结尾不可见的空字符一起被算进去
    
    return 0;

}
