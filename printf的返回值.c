#include <stdio.h>
int main(void)
{
    int bph2o =212;
    int rv ;
    
    rv = printf("%d F is water's boiling point.\n",bph2o);
    //printf()通常是有返回值的,返回值是去计算输入的字符个数(包括空格和换行符)是整数,可以直接被赋值给变量
    printf("The printf() function printed %d characters.\n",rv);
    //被赋值的量也可以被输入出来
    
    return 0;
}