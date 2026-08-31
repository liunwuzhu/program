//参数错误
#include <stdio.h>
int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;
//由于函数printf和scanf的参数个数可变,编译器一般不会警告类似的函数
//但输出却是错的,所以要注意占位符与参数类型,个数一一对应
//用逗号分割函数中不同的参数
    printf("%d\n",n,m);//参数太多
    printf("%d %d %d\n",n);//参数太少
    printf("%d %d",f,g);//值的类型不匹配

    return 0;
}