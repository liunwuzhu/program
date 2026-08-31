//固定宽度整数类型,跨平台打印
#include <stdio.h>
//标准输入头文件
#include <stdint.h>
//该头文件包括等固定宽度整数类型
#include <inttypes.h>
//这个头文件提供了专门打印这些固定宽度类型的格式宏

int main(void)
{
    int32_t me32;
    //int32_t保证32位有符号整数,普通的int取值范围不确定

    me32 = 1234567;
    printf("first,assume int32_t is int:");
    printf("me32 = %d\n",me32);
    //不安全,可能在某些平台上不能正常运行
    printf("next,let's not make any assumptions.\n");
    printf("instead, use a \"macro\" from inttypes.h");
    printf("me32 = %" PRId32 "\n", me32);
    //宏（Macro）就是“预处理阶段”的“查找替换”
    //它让电脑在正式编译你的代码之前，先帮你把代码里的某些“代号”自动换成“另一段文字”
    //本质是替换
    return 0;


}