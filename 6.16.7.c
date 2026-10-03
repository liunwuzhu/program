#include <stdio.h>
#include <string.h>
int main(void)
{
    int m,i;
    char name[20];

    printf("Please enter one word:\n");
    while(scanf("%s",name) == 1)
    {
        m = strlen(name);
        for (i = m - 1;i >= 0;i--)
        //若字符结尾存的是字符串结尾以\0结尾
        {
            printf("%c",name[i]);
        }
    printf("\n");
    }
return  0;
}
/*
char name[20]，**连续存入 5 个有效字符**
下标：`0,1,2,3,4` 存 5 个字符
👉 **`\0` 放在下标【5】的位置**
*/