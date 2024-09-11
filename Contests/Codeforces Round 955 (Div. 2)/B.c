#include <stdio.h>

int main (){

int t;
scanf("%d",&t);
int x,y,k;

for (int i=0;i<t;i++)
   {
    scanf("%d %d %d",&x,&y,&k);

    for (int j=0;j<k;j++)
      {
        x++;
        while (x%y==0)
          {
            x/=y;
          }
      }

    printf("%d\n",x);

   }

return 0;
}
  