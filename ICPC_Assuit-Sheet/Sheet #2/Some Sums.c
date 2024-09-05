#include <stdio.h>

int main (){

int n,a,b;
scanf("%d %d %d",&n,&a,&b);    //insert three numbers 

int sum=0,sum_digits=0,temp;
for (int i=1;i<=n;i++)
   {
         temp=i;
         sum_digits=0;
       while(temp>0)
          {
           sum_digits+=(temp%10);
           temp/=10;
          } 

      if ((sum_digits>=a)&&(sum_digits<=b))
        sum+=i;
      else
          continue;      
   }
         printf("%d",sum);
return 0;
}

