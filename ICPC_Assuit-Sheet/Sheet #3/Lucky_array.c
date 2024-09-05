#include <stdio.h>
int main (){

int n;
int counter=0;
scanf("%d",&n);

int arr[n];
  for (int i=0;i<n;i++)
     {
       scanf("%d",&arr[i]);
     }

int min=arr[0];
 
 for (int i=0;i<n;i++)
   {
    if (arr[i]<min)
      min=arr[i];
   }

 for (int i=0;i<n;i++)
   {
    if (min==arr[i])
      counter+=1;
   }

  if ((counter%2)!=0)
    printf("Lucky");
 else
   printf("UnLucky");
}