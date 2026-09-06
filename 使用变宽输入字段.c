#include <stdio.h>
int main(void)
{
    unsigned width,precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d",&width);
    printf("The number is :%*d:\n",width,number);
    //* 是一个“动态宽度占位符”，它告诉 printf：“我要从后面的参数里取一个数字作为宽度”
    printf("Now enter a width and a precision:\n");
    scanf("%d %d",&width,&precision);
    printf("Weight = %*.*f\n",width,precision,weight);
    printf("Done!\n");

    return 0;
}