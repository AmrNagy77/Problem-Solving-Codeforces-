#include <stdio.h>

int main(){

//insert number of elements
int n;
scanf("%d",&n);

//insert elements
int arr[n];
 for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
 
//print reverse of array
 for (int i=n-1;i>=0;i--)
   printf("%d ",arr[i]);

return 0;
}