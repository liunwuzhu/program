#include <stdio.h>
int main(void)
{
    const int FIRST_OZ = 46;
    const int NEXT_OZ  = 20;
    int ounces,cost;

    printf(" ounces cost\n");
    for (ounces = 1,cost = FIRST_OZ;ounces <= 16; ounces++,cost += NEXT_OZ)
    //分号结束一个语句,而逗号只是这个语句的暂时中断,
    //逗号运算符有两个性质
    //1.逗号是一个序列点,它保证逗号左侧项的所有副作用都在程序执行逗号右侧项之前发生
    //2.逗号表达式的值是右侧项的值
    //另外逗号也可以做分隔符,例如
    //char ch,date;
    //printf("%d %d\n",chimpes,chumpes)
        printf(" %5d $%4.2f\n",ounces,cost / 100.0);
    
    return 0;
}