#include <stdio.h>
int main(void)
{
    int n,i,l = 0,k = 0;//只要累加就初始化
    double m[100000];
    double num = 0;
    double number = 0,numbers = 0;
    scanf("%d %d",&n,&k);
    for (i = 1;i <= n;i++)
    {
        if(i%k == 0)
        {
            m[i-1] = i;
            l++;
        }
        else
        {
            m[i-1] = 0; 
        }
    }
    for(int h = 0; h < n; h++)
        {
        num = num + m[h];
        }
    double nus = 0;
    for(int q = 0;q <= n;q++)
        {
            nus = nus + q;
        }
    if(l != 0 && n != 1)//并是&&
        {
            number = num / l;
            numbers = (nus - num) / (n - l);
        }
    else 
    printf("error");
    
    printf("%.1f %.1f",number,numbers);

    return 0;
}
/*
    这里可以更简便,换成只有一个循环就可以,
    nus += i;意思是nus = nus + i
    这样也省去了算把其余的值赋值为0
*/