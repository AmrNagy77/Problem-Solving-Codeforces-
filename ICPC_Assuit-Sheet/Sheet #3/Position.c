#include <stdio.h>
int main (){

int n;
scanf("%d",&n);

int arr[n];
int xarr[n];
int larr[n];
  for (int i=0;i<n;i++)
     {
       scanf("%d",&arr[i]);
         if (arr[i]<=10)
          {
            xarr[i]=arr[i];
            larr[i]=i;
          }
          else
            {
              xarr[i]=-1;              
            }
     }

            for (int i=0;i<n;i++)
            {
                if (xarr[i]!=-1)
            printf("A[%d] = %d\n",larr[i],xarr[i]);
            }
}     