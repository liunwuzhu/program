//使用嵌套循环
#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main(void)
{
    int row;
    char ch;

    for (row = 0;row < ROWS;row++)
    {
        for (ch ='A';ch < ('A' + CHARS);ch++)
            printf("%c",ch);
            //注意嵌套循环中的内层循环在每次外层循环迭代时都执行完所有的循环
    printf("\n");
    }
    //在该嵌套循环中,内层循环一行打印10个字符,外层循环创建6行

    return 0;
}