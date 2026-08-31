//一个文件中包含两个函数
#include <stdio.h>
void butler(void);
int main(void)
{
    printf("I will summon the butler function.\n ");
    butler();
    printf("Yes. Bring me some tea and writeable dvds.\n");

    return 0;
}
void butler(void)
{
    printf("you rang, sir?\n ");
}
