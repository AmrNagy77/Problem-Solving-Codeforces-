#include <stdio.h>

int main (){

int n;
scanf("%d",&n);

int four=4;
for (int i=1;i<=4*n;i++)
  {
    if (i==four)
      {
        printf("PUM\n");
        four+=4;
      }
    else 
      {
        printf("%d ",i);
      }  

  }

return 0;
}