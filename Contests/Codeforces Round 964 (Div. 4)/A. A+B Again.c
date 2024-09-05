#include <stdio.h>

int Sum_Digits(int x)
   {
    int digit1 = x%10;
    x/=10;
    int digit2 = x%10;
    int sum = digit1+digit2;

    return sum;
   }

int main ()
   {
    int t;
    int n;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
      {
        scanf("%d",&n);
        printf("%d\n",Sum_Digits(n));
      }
return 0;      
   }