#include <stdio.h>
#include <string.h>

int main (){

int t;
scanf("%d",&t);
for (int i=0;i<t;i++)
   {
    int n;
    scanf("%d\n",&n);
    int hint[n];
    char s[n][5];
    int x=n-1;
     for (int j=0;j<n;j++)
        {
            gets(s[j]);
          for (int k=0;k<4;k++)
            {
              if (s[j][k]=='#')
              {
                hint[x]=k+1;
                break;
              }
            } 
            x--;
        }
    for (int z=0;z<n;z++)
     {
      printf("%d ",hint[z]);
     }
    printf("\n");

   }

return 0;
}
