//编程练习,发出警报然后打印一个含有符号的文本
#include <stdio.h>
#include <stdlib.h>
//保证程序在终端中不关闭所必要的头文件
int main(void)
{
    printf("\astartled by the sudden sound,sally shouted\n");
    //\a是警报的意思,在终端运行才可出现警报
    printf("\"By the great pumpkin, what was that!\"");
    //\"是打出这个符号的意思
    system("pause");
    //请按任意键继续的意思
    return 0;

}