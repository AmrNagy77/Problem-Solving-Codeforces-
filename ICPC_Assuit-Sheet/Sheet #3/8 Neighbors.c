#include <stdio.h>
int main (){

int n,m,x,y;
char home[100][100];
int i,j;

 scanf("%d%d",&n,&m);
   for (i=0;i<n;i++)
     {
        for (j=0;j<m;j++)
          {
            scanf("\n%c",&home[i][j]);
          }
     }
   
   scanf("%d%d",&x,&y);

      for (i=0;i<n;i++)
     {
        for (j=0;j<m;j++)
          {
            printf("%c",home[i][j]);
          }
     }
   








}