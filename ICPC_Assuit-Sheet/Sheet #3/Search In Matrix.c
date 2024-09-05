#include <stdio.h>
int main (){

int n,m;
int x[100][100];
int num,check=0;

scanf("%d %d",&n,&m);
  for (int i=0;i<n;i++)
  {
    for (int j=0;j<m;j++)
      {
        scanf("%d",&x[i][j]);
      }
  }
    
  scanf("%d",&num);

 for (int i=0;i<n;i++)
  {
    for (int j=0;j<m;j++)
      {
        if(num==x[i][j])
          check=1;  
      }
  }
      if (check==1)
          printf("will not take number");
      else    
          printf("will take number");

return 0;
}