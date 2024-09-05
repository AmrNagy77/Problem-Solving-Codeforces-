#include <stdio.h>
int main (){

int n;
scanf("%d",&n);

int arr[n];
  for (int i=0;i<n;i++)
     {
       scanf("%d",&arr[i]);
     }

int min=arr[0];
 int l;
 for (int i=0;i<n;i++)
   {
    if (arr[i]<min)
      { 
        min=arr[i];
        l=i;
      }   
   }
    l=l+1;
printf("%d %d",min,l);

return 0;
}