////字符串断行的三种方法
#include <stdio.h>
int main()
{
    printf("Here's one way to print a");
    printf("long string.\n");
    //1.通过使用两个printf的语句来断行
    printf("Here's another way to print a \ 
long string.\n");
    //2.通过\和enter组合来断行
    printf("Here's the newest way to print a " 
        "long string.\n");
    //3.通过ANSIC引入字符串连接,双引号之间可留空白,编译器会自动组合
    return 0;
    
}