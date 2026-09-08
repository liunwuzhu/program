//题目要求,编写一个程序,提示用户输入名和姓,然后以名,姓的格式打印出来
#include <stdio.h>
int main(void)
{
    char first[10],last[10];
    printf("Please enter your first and last name:\n");
    scanf("%s %s",first,last);
    printf("you first name is %s\n",first);
    printf("you last name is %s\n",last);

    return 0;

}