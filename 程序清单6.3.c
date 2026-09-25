#include <stdio.h>
int main(void)
{
    int n = 0;

    while (n < 3)
        printf("n is %d\n",n);
        n++;
        //若不加花括号,则只有whlie下一条语句是属于循环的一部分
    printf("That's all this proram does\n");
    
    return 0;
}