#include <stdio.h>
#include <windows.h>
int main() 
{
    SetConsoleOutputCP(65001);
    int num1, num2;

    printf("请输入一个数字：");
    scanf("%d", &num1);          // 你故意输入 123a
    printf("你输入的第一个数是：%d\n", num1);

    printf("请输入第二个数字：");
    scanf("%d", &num2);          // 程序不会等你输入，直接卡死！因为‘a’还在那儿
    printf("你输入的第二个数是：%d\n", num2);

    return 0;
}
