#include <stdio.h>

int main (){

int t;
scanf("%d",&t);
 int x,y,k;
while(t--)
   {
    int x0=0,y0=0;
    scanf("%d %d %d",&x,&y,&k);
      
     if (k>x&&k>y)
      {
        printf("%d\n",2);
      }
    else
      {
        int count=0;
        while (x0<x||y0<y)
          {
            if (x0<x){
            x0+=k;
            }
            count++;
            if(y0<y) {
            y0+=k;
            }
            count++;
          }
          if (x>y)
          printf("%d\n",count-1);
          else
          printf("%d\n",count);
      }
   }
}