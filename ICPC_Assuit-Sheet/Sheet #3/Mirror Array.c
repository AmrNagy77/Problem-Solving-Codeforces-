#include <stdio.h>
int main (){

int m,n;
int arr[50][50];
int i,j;
int xarr[50][50];

scanf("%d%d",&n,&m);

for (i=0;i<n;i++)
  {
     for (j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
  }
/*
    ------sloution if arr[3][3] only----------


for (i=0;i<n;i++)
  {
     for (j=0;j<m;j++)
        {
            if (j==m-2)
            {
                xarr[i][j]=arr[i][j];
            }
            else if (j==m-3)
            {
                xarr[i][j]=arr[i][m-1];
            }
            else if (j==m-1)
            {
                xarr[i][j]=arr[i][m-3];
            }            
        }
  }
  
for (i=0;i<n;i++)
  {
     for (j=0;j<m;j++)
        {
            printf("%d ",xarr[i][j]);
              if (j==m-1)
                printf("\n");
        }
  }
 */

for (i=0;i<n;i++)
   { 
      for (j=m-1;j>=0;j--)
         {
            printf("%d ",arr[i][j]);
              if (j==0)
                printf("\n");          
         }

   }







}