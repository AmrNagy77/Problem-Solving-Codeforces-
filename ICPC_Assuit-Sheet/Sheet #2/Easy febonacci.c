#include <stdio.h>

int main (){

int n;
scanf("%d",&n);

int x=0,y=1,z;

    if(n==1)
    {
      printf("%d ",x);
      return 0;
    }
     if(n==2)
    {
      printf("%d %d ",x,y);
      return 0;
    }    
printf("%d %d ",x,y);
for (int i=3;i<=n;i++)
   {
    z=x+y;
    printf("%d ",z);
    x=y;
    y=z;
   }

return 0;
}