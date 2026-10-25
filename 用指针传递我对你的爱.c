#include <stdio.h>

void change (int *m,int *n);

int main(void)
{
    int h = 520;
    int i = 1314;
    printf("In fact, I've said this sentence many times"
        "but I still want tell you%d %d\n",h,i);
    change (&h,&i);
    printf("In fact, I've said this sentence many times"
        "but I still want tell you%d %d\n",h,i);    

        return 0;
    }
void change (int *m,int *n)
{
    int temp ;
    temp = *m;
    *m = *n;
    *n = temp;
}