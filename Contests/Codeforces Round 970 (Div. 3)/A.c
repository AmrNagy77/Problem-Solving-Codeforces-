#include <stdio.h>
#include <math.h>
int main (){

int t;
scanf("%d",&t);

int a,b;
int arr[20];
int xarr[20];
for (int i=0 ; i<t ; i++)
   {
      scanf("%d %d",&a,&b);

        if ((a==0&&b%2==0)||(b==0&&a%2==0))
          {
            printf("YES\n");
            continue;
          }           
       else if ((a==0&&b%2!=0)||(b==0&&a%2!=0))
          {
            printf("NO\n");
            continue;
          }        
                

        if ((a%2==0&&b%2==0)||(a%2==0&&b%2!=0))
          {
            printf("YES\n");
            continue;
          }           
       else if ((a%2!=0&&b%2!=0)||(a%2!=0&&b%2==0))
          {
            printf("NO\n");
            continue;
          } 

    }

return 0;
   }


