#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    if (n > 0)
    //判断语句
    {
        printf("positive\n");
    }
    else if  (n == 0)
    //判断相等的必须是两个==
    {
        printf("zero\n");
    }
    else
    //排除万难选择这个 
    {
        printf("negative");
    }

    return 0;
    
}