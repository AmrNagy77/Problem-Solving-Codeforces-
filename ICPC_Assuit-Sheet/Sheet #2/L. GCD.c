#include <stdio.h>
 
int main (){

int a,b,g;
scanf("%d %d",&a,&b);
if (a<=b)
 g=a;
else if (b<a)
 g=b; 

int max=1;
for (int i=1;i<=g;i++)
  {
    
    if (a%i==0&&b%i==0)
     {
        if (i>max)
          max=i;
     }

  }
printf("%d ",max);

return 0;
} 