//字符串格式
#include <stdio.h>
#define BLURB "Authentic imitation"
int main(void)
{
    printf("[%2s]\n",BLURB);
    // %2s：宽度为 2，打印字符串
    printf("[%24s]\n",BLURB);
    // %24s宽度为24,打印字符串
    printf("[%24.5s]\n",BLURB);
    // %24.5宽度为24,打印前五个字符
    printf("[%-24.5s]\n",BLURB);
    // %-24.5宽度为24,打印前五个字符,左对齐

    return 0;
}