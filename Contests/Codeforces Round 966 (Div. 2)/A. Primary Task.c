#include <stdio.h>

int main (){

int n;
scanf("%d",&n);

int arr[n];
for (int i=0;i<n;i++)
   scanf("%d",&arr[i]);

for (int i=0;i<n;i++)
      {
          if (arr[i]<=101)
          {
            printf("NO\n");
            continue;
          }  
          else if (arr[i]<=109&&arr[i]>=102)
          {
            printf("Yes\n");
            continue;            
          }  
          else if (arr[i]<=1099&&arr[i]>=1010)
          {
            printf("Yes\n");
            continue;            
          } 
          else 
          {
            printf("NO\n");
            continue;
          }

      }
  
   return 0;
}