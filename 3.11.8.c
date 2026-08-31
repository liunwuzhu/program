//将杯数以品脱,盎司,汤匙,茶勺的形式输出
#include <stdio.h>
#include <windows.h>
int main(void)
//main不是mian注意拼写
{
    SetConsoleOutputCP(65001);
    double input;
    //以后double就写%lf
    printf("请输入杯数:");
    scanf("%lf",&input);
    printf("\n转换为品脱数为%.2f",input / 2  );
    printf("\n转换为盎司说为%.2f",input * 8  );
    printf("\n转换为汤勺数为%.2f",input * 16 );
    printf("\n转换为茶勺数为%.2f",input * 48 );

    return 0;

}