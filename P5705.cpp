#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[100];
    int n;
    scanf("%s",&a);
    
    for (n = strlen(a);n >= 0;n--)
    {
        printf("%c",a[n]);
    }
    return 0;
}