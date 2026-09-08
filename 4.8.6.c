//编写一个程序,先提示用户输入名,然后提示用户输入姓
//在一行打印用户输入的名和姓,下一行分别打印打印名和姓的字母数,字母数要求与相应的名和姓开头对齐
//如
//   Melissa honeybee
//         7        8
//然后让数字跑前边去
#include <stdio.h>
#include <string.h>
int main(void)
{
    char first[40], last[40];
    
    printf("Please enter your first name:\n");
    scanf("%s",first);
    printf("Please enter your last name:\n");
    scanf("%s",last);
    printf("%s %s\n",first,last);
    printf("%*d %*d\n",strlen(first),strlen(first),
    strlen(last),strlen(last));
    printf("%s %s\n",first,last);
    printf("%-*d %-*d\n",strlen(first),strlen(first),
    strlen(last),strlen(last));

    return 0;
}