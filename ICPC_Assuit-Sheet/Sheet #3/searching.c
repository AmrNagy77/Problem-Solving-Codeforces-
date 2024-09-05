#include <stdio.h>

int main(){

//insert number of elements
int n;
scanf("%d",&n);

//insert elements
int arr[n];
 for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);

//insret the numeber for search
int x;
scanf("%d",&x);    


//searching
int Not_found=0;
for (int i=0;i<n;i++)
  {
    if (x==arr[i])
    {
        printf("%d",i);
        break;
    }

    Not_found++;
  }

  if (Not_found==n)
    printf("%d",-1);

return 0;
}   