#include <stdio.h>
int main(void)
{
    int n;

    printf("please enter three integers:\n");
    scanf("%*d %*d %d",&n);
    //把*放在%和转换字符之前时,会使得scanf()跳过相应的输入项
    //适用于读取文件中特定列的内容
    printf("The last integer was %d\n",n);

    return 0;
}