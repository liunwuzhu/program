//转换不匹配
#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;
    
    printf("num as short and unsigned short: %hd %hu\n",num,num);
    // %hd：有符号 short ;%hu：无符号 short
    //%hu 是无符号格式，永远不显示负号，所有数都当正数翻译。
    printf("-num as short and unsigend short: %hd %hu\n",mnum,mnum);
    //由于有符号数字在内存中以补码二进制(移码)的形式存储,正负数都以正数的形式存储,所以翻译错误输出错误
    //%hu 把内存里的补码直接当正数读，变成 65200
    printf("num as int and char :%d %c\n",num,num);
    //short int是两字节而char是一字节,用%c打印336时只会查看两字节中的最后一个,这就叫做截断
    printf("WORDS as int,short,and char:%d %hd %c\n",WORDS,WORDS,WORDS);
    //%d、%hd、%c 从内存里“拿取”的字节数不同，所以读出来的结果完全不同
    //内存里的二进制没变，变的是“翻译规则”——%hd 说“这是补码”，%hu 说“这就是普通正数”
    //%c 只认 0~127 的 ASCII 码（扩展 ASCII 到 255），它会取整数的最后 8 个二进制位（最低字节），然后去查 ASCII 表
    return 0;
}
