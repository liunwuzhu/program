//字符和字符串弄混搞错
#include <stdio.h>
int main(void)
{
    int a,b,c;
    float d,g;
    char e[100], f[100]; 
     // 错误①：原 char e,f 是单个字符（只有1字节），而后面用 %s 读写的是"字符串"，          
     // 单个 char 根本存不下（还要存结尾的'\0'），必然越界。应改成字符数组。


    scanf("%d",&a);
    printf("What you typed is:%d\n",a);
     // 拼写：typerd -> typed（只是笔误，不影响运行）
    scanf("%f %e",&d,&g);                    
     // d、g 都是 float，%f/%e 与实参匹配，这里没有错
    printf("What you typed is:%.2f,%.2e\n",d,g);
    scanf("%s",e);                           
     // 错误②：原来 scanf("%s",&e) —— e 若为单个 char，单词加'\0'
    
     //  写入 1 字节空间会越界溢出；改成数组后应直接传 e（数组首地址），
     // 不能再写 &e（&e 的类型是 char(*)[100]，与 %s 需要的 char* 不匹配）
    printf("What you typed is:%s\n",e);
    // 错误③：原来 printf("%s",e) 里 e 是 char 变量（传值变成 int），
     // 而 %s 要求传 char* 指针，类型不匹配，会输出乱码或崩溃
    scanf("%s %d",f,&b);
    // 错误④：同②，f 也必须是数组，且传 f 而不是 &f
    printf("What you typed is:%s,%d\n",f,b); 
    // 错误⑤：同③，f 是数组名(char*)时 %s 才正确
    scanf("%*s %d",&c);
     // %*s 表示读入一个单词后直接丢弃不保存,主要是*的作用
    printf("What you typed is:%d\n",c);

    return 0;
}