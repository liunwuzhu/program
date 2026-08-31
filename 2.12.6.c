#include <stdio.h>
//头文件,#include是预处理指令
int toes,two_toes,square_toes;
//声明整数变量
int main(void)
//int表示函数执行完要返回一个整数给系统,main为主函数,每个程序有且只有一个;
//void表示不带任何参数
{
    //程序开始执行的标志
    toes = 10;
    //为变量赋值
    two_toes = 2 * toes;
    //进行初步运算
    square_toes = toes * toes;
    //运算

    printf("toes是%d,二倍是%d,平方是%d",toes,two_toes,square_toes);
    //printf是打印符,作用是在屏幕上打印文字,%d是占位符

    return 0;
    //返回语句,表示程序正常进行
}