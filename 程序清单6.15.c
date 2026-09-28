//出口条件循环
#include <stdio.h>
int main(void)
{
    const int secret_code = 13;
    int code_entered;

    do
    {
        printf("To enter the triskidekaidekaphobia therapy club\n");
        printf("please enter the secret code number:");
        scanf("%d",&code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! You are cured!\n");

    return 0;
}
/*
do while循环通用形式
do
    statement(可以是简单的,也可以是复杂的)
while (expperssion);
在执行测试条件之前先执行一遍循环体
*/