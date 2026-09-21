#include <stdio.h>
int main(void)
{
    printf("integer division : 5/4  is %d \n", 5 / 4 );
    printf("integer division : 6/3  is %d \n", 6 / 3 );
    printf("integer division : 7/4  is %d \n", 7 / 4 );
    printf("floating division: 7./4. is %1.2f", 7. / 4.);
    printf("mixed division:  7./4   is %1.2f\n",7. / 4);
    //浮点数除法的结果是浮点数,整数除法的结果是整数
    //在c中,整数除法结果的小数部分被丢弃,这一过程称为截断
    //不会四舍五入,小数部分直接舍弃
    //运算优先级是同四则运算优先级,遇到乘法和除法,从左至右进行 
    return 0;

}