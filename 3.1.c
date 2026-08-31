#include <stdio.h>
int main(void)
{
    float weight;
    //float表示单精度浮点数,精确到小数点后六位
    float value;
    //表示声明一个变量,这个变量为单精度浮点数

    printf("与你体重相等的黄金价值多少?\n");
    printf("让我们算一下\n");
    printf("请以千克为单位输入你的体重:\n");

    scanf("%f",&weight);
    //scanf()是一个输入函数,记录用户输入的值
    //%f表示以浮点数的形式储存用户输入值
    //&是取地址运算符,意思是把用户的值存到weight中
    
    value = 930000 * weight;
    printf("与你体重价值相等的黄金价值%.2f元\n",value);
    //%.2f表示精确到小数点后两位"","用来分割多个参数,volue表示第二个参数
    printf("你很容易价值很高\n");
    printf("如果黄金价格下跌\n");
    printf("那你就吃更多,以便让你重新达到这个价值吧!");

    return 0;

}