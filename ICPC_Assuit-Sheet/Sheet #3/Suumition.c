#include <stdio.h>
#include <stdlib.h>
int main (){
int n,i;
scanf("%d",&n);
long long arr[n];
long long sum=0;
 
for (i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
     sum+=arr[i];
  }
   printf("%d\n",abs(sum));
  
return 0;
}