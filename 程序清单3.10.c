//使用转义序列
#include <stdio.h>
int main(void)
{
    float salary;
    
    printf("\aEnter yoour desired mothly salary");
    //\a代表响铃(在电脑终端执行才会响)
    printf(" $_______\b\b\b\b\b\b\b");
    //\b是退格序列,每一个\b意思是光标在这行向前移动一步
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.",salary,salary * 12.0 );
    //\t相当于输入一个tab
    //制表位”就是电脑屏幕/打印纸上预先画好的一条条“隐形竖线网格”
    //光标就会从当前位置“嗖”地一下，跳到右边最近的那条竖线上去
    printf("\rGee!\n");
    //\r表示光标回到行首

    return 0;     
}
