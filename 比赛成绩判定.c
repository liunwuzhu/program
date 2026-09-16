#include <stdio.h>
int main(void)
{
    int n;

    scanf("%d",&n);

    if (n >= 70)
    {
        if (n >= 90)
        {
            printf("A\n");
        }
        else if (n >= 80 && n < 90)
        {
            printf("B\n");
        }
        else
        {
            printf("C\n");
        }
    }
    else if(n >= 0 && n < 70)
    {
        if (n >= 60 && n < 70)
        {
            printf("D\n");
        }
        else
        {
            printf("F\n");
        }
    }
    else
    {
        printf("error\n");
    }
    return 0;
}
//更为简单的代码
//#include <stdio.h>

//int main()
//{
    //int score;

   // scanf("%d", &score);

   // if (score >= 90)            /* 从最高的一段开始挡 */
     //   printf("A\n");
   // else if (score >= 80)       /* 能走到这里，说明 <90 已经成立，不用再写 */
 //       printf("B\n");
 //   else if (score >= 70)
    //    printf("C\n");
   // else if (score >= 60)
  //      printf("D\n");
  //  else                        /* 前面全不成立，剩下的只能是 0~59 */
  //      printf("F\n");

 //   return 0;
//}
