//将厘米身高转换成英寸身高
#include <stdio.h>
#include <windows.h>
int main(void)
{
    SetConsoleOutputCP(65001);
    double zheight,yheight;
    
    printf("请以厘米输入你的身高:");
    scanf("%lf",&zheight);
    printf("\n你输入的身高是%.2lfcm\n",zheight);
    yheight = zheight / 2.54;
    printf("你的英寸身高是%.2lf英寸",yheight);

    return 0;
}