#include <stdio.h>
int main(void)

{
    float about = 32000.0f;
    //float为单精度浮点数,大小为4字节,表示的时候需要加后缀f/F
    //结尾不加f,默认是double(写float也默认是double)
    double abet = 2.14e9;
    //double为双精度浮点数,大小为八字节,写出来的数字默认为这个
    //小数字面量（就是写在代码里的数字）默认是 double
    long double dip = 5.32e-5L;
    //long double为长双精度浮点数,后缀为l/L
    //e是乘以10的多少次方
    printf("%f can be written %e\n",about,about);
    //%f以普通小数输出,默认小数点后六位
    printf("and it's %a in hesadecimal , powers of 2 notation\n",about);
    //%a以16进制输出
    printf("%f can be written %e\n",abet,abet);
    //%e以科学计数法输出,//%.2e科学计数法保留两位
    printf("%Lf can be written %Le\n",dip,dip);
    //一看就懂,不做赘述
    
    return 0;
    
}