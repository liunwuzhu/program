//编写一个程序,提示用户输入以兆位每秒(mb/s)为单位的下载速度和以兆节为单位的文件大小.
//程序中应计算文件的下载时间.
//注意,这里一字节等于八位.使用float类型,并用/用作除号
//该程序要以下面的格式打印3个变量的值(下载速度,文件大小,下载时间),显示小数点后两位
//"At 18.12 megabits per second, a file of 2.20 megabytes downloads in 0.97 seconds
#include <stdio.h>
int main(void)
{
    float speed, size, time;

    printf("Please enter speed and size:\n");
    scanf("%f %f",&speed,&size);
    time = size * 8;
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n ", speed, size, time / speed);

    return 0;

}