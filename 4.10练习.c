//代码练习,不做解释
#include <stdio.h>
int main(void)
{
    char name[20];
    float cash;
    scanf("%s %f",name,&cash);
    printf("the %s family just may be $%.2f dollars richer",name,cash * 365);
    
    return 0;
}