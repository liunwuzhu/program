//使用循环处理数组
#include <stdio.h>
#define SIZE 10
//使用明示常量的好处,如果改数组的大小直接修改定义就好,
#define PAR 72
int main(void)
{
    int index,score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf scores:\n",SIZE);
    for (index = 0;index < SIZE ;index++)
        scanf("%d",&score[index]);
        //输入是缓冲的,只有用户输入Enter才会发给程序
        //&score[index]表示存入数组中的位置会随index的变化而变化
    printf("The scores read in are as follows:\n");
    for (index = 0;index < SIZE; index++)
        printf("%5d",score[index]);
    printf("\n");
    for (index = 0;index < SIZE ;index++)
        sum += score[index];
    average = (float) sum / SIZE;
    printf("SUm of scores = %d,average = %.2f\n",sum,average);
    printf("That's a handicap of %.0f.\n",average - PAR);

    return 0;
}
/*
该代码中较好的编程风格
1.使用了明示常量+
2.for (index = 0;index < SIZE; index++),程序中的循环能够确保数据不超出数组的范围
3.程序能够显示刚刚读入的数据,确保处理的数据与期望的数据一样

模块化隐含的思想:
应该把程序划分为一些独立的单元,每个单元执行一个任务
*/