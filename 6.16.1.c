#include <stdio.h>
int main(void)
{
    char letter [26];
    int  m , n;

    for (m = 0; m < 26; m++)
    {
        letter [m] = 'a' + m;
        printf("%c ",letter[m]);
    }
    return 0;
}