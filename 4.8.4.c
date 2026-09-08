//编写一个程序,提示用户输入一个身高(单位:cm)和姓名,然后以下面格式显示用户刚输入的信息
//Debney,you are 1.708 m tall
#include <stdio.h>
int main(void)
{
    float height;
    char name[30];

    printf("Please enter your name and your height in centimeters:\n");
    scanf("%s %f",name,&height);
    printf("%s,you are %.2f m tall.\n",name,height / 100);

    return 0;

}
