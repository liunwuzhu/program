#include <stdio.h>
#include <string.h>
#define SISHI 40
#define WO "wo shi ni baba"
#define DUI "bu jie shou fan bo"
#define KUANG "jin tian jiu kuang ke zen mo le"
void put_char_num(char ch,int num);
int imin(int ,int );

int main(void)
{
    put_char_num('*',SISHI);
    putchar('\n');
    put_char_num(' ',13);
    printf("%s",WO);
    putchar('\n');
    put_char_num(' ',(SISHI - strlen(DUI))/2);
    printf("%s",DUI);
    putchar('\n');
    put_char_num(' ',(SISHI - strlen(KUANG))/2);
    printf("%s",KUANG);
    putchar('\n');
    put_char_num('*',SISHI);
    putchar('\n');
    printf("%d",imin(54188,1452));
    return 0;
}

void put_char_num(char ch,int num)
{
    for(int i = 0;i < num;i++)
        putchar(ch);
}
int imin(int m ,int n)
{
    return (n < m) ? n : m;
}