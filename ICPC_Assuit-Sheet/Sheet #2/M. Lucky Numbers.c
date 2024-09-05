#include <stdio.h>

int main(){

int a,b;
scanf("%d %d",&a,&b);

     int k=0;
for (int i=a;i<=b;i++)
   {
     int temp=i;
     while (temp)
       {
        if (temp%10==7||temp%10==4)
          {
            temp/=10;
          }
        else {
            goto repeat;
        }
  
       }
            printf("%d ",i);
            k++;
repeat:
  printf("");
   }

    if (k==0)
    {
        printf("%d",-1);
    }
    
return 0;
}