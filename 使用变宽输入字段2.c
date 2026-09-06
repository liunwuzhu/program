#include <stdio.h>                                  // (1)预处理：把 stdio.h(标准输入输出) 头文件包含进来，这样编译器才知道 printf/scanf 的用法
int main(void)                                      // (2)主函数，程序入口，从这里开始执行；int=最后要返回整数给系统，void=不需要接收参数
{                                                   // (3)左大括号：main 函数体的开始，与第17行的 } 配对
    unsigned width, precision;                      // (4)声明两个"无符号整型"变量：width存"字段宽度"，precision存"小数精度"，它们只会是非负数
    int number = 256;                               // (5)声明整型变量 number 并初始化为 256，稍后演示：把整数按用户输入的宽度打印出来
    double weight = 242.5;                          // (6)声明双精度浮点变量 weight 并初始化为 242.5，稍后演示"宽度+精度"控制小数输出

    printf("Enter a field width:\n");               // (8)在屏幕上提示用户"请输入一个字段宽度"，\n 是换行符，输出完会换到下一行
    scanf("%d", &width);                            // (9)scanf 读取用户输入的整数并存入 width；%d=十进制整数，&width=取变量地址，scanf 必须加&才能写入
    printf("The number is :%*d:\n", width, number); // (10)打印 number；%*d 中 * 表示"宽度由后面的参数 width 提供"，两边冒号用来观察占了几格
    printf("Now enter a width and a precision:\n"); // (11)提示用户：再输入一个宽度和一个精度(两个数之间用空格隔开)
    scanf("%d %d", &width, &precision);             // (12)一次读取两个整数：第1个存进 width，第2个存进 precision；两个变量都要加&
    printf("Weight = %*.*f\n", width, precision, weight); // (13)%*.*f：第1个*代表总宽度(取width)，第2个*代表小数位数(取precision)，然后打印浮点数weight
    printf("Done!\n");                              // (14)打印结束语"Done!"并换行

    return 0;                                       // (16)main 返回整数0给操作系统，表示程序正常结束(对应第2行的 int)
}                                                   // (17)右大括号：main 函数体的结束，程序到此执行完毕