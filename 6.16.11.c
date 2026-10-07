#include <stdio.h>
#define EIGHT  8
int main(void)

{
    int name[EIGHT];
    int i,m;
        printf("Please enter 8 number:\n");
    for (i = 0; i < EIGHT; i++)
    {
        scanf("%d",&name[i]);
    }
    for (m = EIGHT - 1;m >= 0; m--)
    {
        printf("%d",name[m]);
    }

    return 0;
}

/*
name → 数组名，代表数组首地址，本身就是地址 ✅
scanf("%d", name);   // 等价于 &name[0]，不用加&
name[i] → 数组里面的单个元素，是一个普通 int 变量，是值，不是地址，必须加 &
*/
/*// 1. name 是首地址（&name[0]）
scanf("%d", name);        // 只写入 name[0]

// 2. name+i 是第i个元素的地址
scanf("%d", name + i);    // 写入 name[i]

// 3. name[i] 是元素的值！不是地址
scanf("%d", name[i]);     // ❌ 错！

// 4. &name[i] 也是第i个元素地址，和 name+i 完全等价
scanf("%d", &name[i]);    // ✅
*/