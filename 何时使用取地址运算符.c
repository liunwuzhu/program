//scanf()是把输入的字符串转化为整数,浮点数,字符,字符串
//scanf()规则
//如果scanf()读取基本变量类型的值,在变量名前加上一个&
//如果用scanf()把字符串读入字符数组中,不要使用&
#include <stdio.h>
int main(void)
{
    int age;
    float assets;
    char pet[30];
    //字符数组,用于储存字符串

    printf("Enter your age, assets,and favorite pet.\n");
    scanf("%d %f",&age,&assets);
    scanf("%s",pet);
    //用户在输入的时候确保每个输入项之间输入至少一个换行符,空格,或制表符,可以多输入或分行输入
    //%c除外,%c会读取用户的空格
    //scanf在读取的时候会跳过前面的空白
    printf("%d $%.2f %s\n",age,assets,pet);
    
    return 0;
}