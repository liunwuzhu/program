/*C中的真假*/
#include <stdio.h>
int main(void)
{
    int ture_val,false_val;
    //关键字最好不用做变量

    ture_val = (10 > 2);
    false_val = (10 == 2);
    //在c中表达式一定有一个值,关系表达式也不例外,并且可以将值赋给变量,或者用于循环检测
    printf("ture = %d,false = %d",ture_val,false_val);

    return 0;
}