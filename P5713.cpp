#include <stdio.h>
#define LOCAL 5
#define LUOGU 3
#define PZ 11
int main(void)
{
    int n, l_time,g_time;
    scanf("%d",&n);
    l_time = n * LOCAL;
    g_time = n * LUOGU + PZ;
    if(l_time < g_time)
    {
        printf("Local");
    }
    else
    {
        printf("Luogu");
    }
    return 0;
}