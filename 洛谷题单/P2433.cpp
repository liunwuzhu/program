#include<stdio.h>
#include<math.h>
#include<string.h>
int main() 
{
    int T;
    scanf("%d", &T);
    if (T == 1) 
    {
        printf("I love Luogu!");
    } 
    else if (T == 2) 
    {
        printf("%d %d", 2 + 4, 10 - 2 - 4);
    } 
    else if (T == 3) 
    {
        printf("%d\n%d\n%d",14/4,14/4*4,14%4);
    } 
    else if (T == 4) 
    {
        printf("%.6g",500.0 / 3.0);
    } 
    else if (T == 5) 
    {
        printf("%d",(260+220)/(12+20));
    } 
    else if (T == 6) 
    {
        printf("%g",sqrt(9 * 9 + 6 * 6));
    } 
    else if (T == 7) 
    {
        int a = 100;
        a= a + 10 ;
        printf("%d\n",a);
        a = a - 20;
        printf("%d\n",a);
        a = 0;
        printf("%d",a);
    } 
    else if (T == 8) 
    {
        const double  R = 5.0,PI = 3.141593;
        printf("%g\n%g\n%g",2 * PI * R,PI * R * R,(4.0/3.0) * PI * R * R * R);
    } 
    else if (T == 9) 
    {
        int i,n = 1;
        for (i = 1;i <= 3;i++)
        {
            n = (n + 1) * 2;
        }
        printf("%d",n);
    } 
    else if (T == 10) 
    {
        double x = (240.0 - 60.0) / (30.0 - 6.0);
        double y = 240.0 - 30.0 * x;
        printf("%.0f",(y + 10 * x) / 10);
    }
    else if (T == 11) 
    {
        printf("%g",100.0/( 8 - 5 ));
    } 
    else if (T == 12) 
    {
        char word[27];
        for(int i = 0;i < 26;i++)
        {
            word[i] = 'A' + i;
        }
        char eighteen = word[17];
        int m;
        for(int n = 0; n<26;n++)
        {
            if(word[n] == 'M')
            {
                m = n + 1;
                break;
            }
        }
        printf("%d\n%c",m,eighteen);
    } 
    else if (T == 13) 
    {
        const double PI = 3.141593;
        double S = (4.0/3.0 * PI * 4 * 4 * 4) + (4.0/3.0 * PI * 10 * 10 * 10);
        double r = cbrt (S);
        printf("%d",(int)r);
    } 
    else if (T == 14) 
    {
        int d ,p,D = -1;
        for (d=110,p=10;d > 10;d--,p++)
            {
                int money = d * p;
                if(money == 3500)
                {
                    D = d; 
                }
            }
            printf("%d",D);
    }
    return 0;
}
/*1. **整数除法**：`4/3`、`1/3` 这种一定要写浮点数（`4.0/3.0`），否则结果直接截断。
2. **输出格式**：题目要求 “每行一个” 就用`\n`，别用空格；注意输出顺序。
3. **变量初始化**：循环用到的变量一定要给初值，不然是随机值。
4. **下标与序号**：数组从 0 开始，题目从 1 开始计数时，记得 + 1。
5. **多解问题**：看清楚题目要最大值还是最小值，别找到就 break*/
