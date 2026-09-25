#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed");
    printf("(q to quit):");
    status = scanf("%ld",&num);
    //若scanf()正常读取到用户输入的值便会返回一个1,失败则返回0,特殊情况会返回-1
    while (status == 1)
    //== 是判断右边的值是否等于左边的值
    {
        sum = sum + num;
        printf("Please enter next integer (q to qoit):");
        status = scanf("%ld",&num);
        //在循环中加一个scanf会让程序持续的读取用户输入的数据;
    }
    //获得第一个用于测试的值
    //当测试值为真
    //      处理值
    //      获得下一个值
    //还有其他形式例如while(scanf("%ld",&num) == 1){},此形式更为简洁
    printf("Those intergers sum to %ld.\n",sum);

    return 0;
}