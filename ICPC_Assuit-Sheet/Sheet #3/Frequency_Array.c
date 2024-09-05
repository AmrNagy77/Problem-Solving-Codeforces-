#include <stdio.h>
int main(){

int nums[50];
int freq[50]={0};
int n,m,i,j;
int counter=0;

scanf("%d%d",&n,&m);
  
  for ( i=0;i<n;i++)
    {
     scanf("%d",&nums[i]);
    }

  for (i=0;i<=m;i++)
     {
       for (j=0;j<n;j++)
         {
            if (i+1==nums[j])
              counter+=1;
         }
      freq[i]=counter;
      counter=0;
     }

  for (i=0;i<m;i++)
  {
    printf("%d\n",freq[i]);   
  }

return 0;
}