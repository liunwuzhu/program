#include <stdio.h>
void xiao(void);
//函数声明,第一个void表示不需要向系统返回任何值(纯干活)
//第二个void表示不带任何参数(空手干活)
//结尾带分号
int main(void)
{
    xiao();
    //跳转,并执行该函数
    return 0;
}

void xiao(void)
//函数定义,即为具体工作内容
{
    printf("smile!smile!smile!\nsmile!smile!\nsmile!");
    //\n是转义序列,表示换行
}