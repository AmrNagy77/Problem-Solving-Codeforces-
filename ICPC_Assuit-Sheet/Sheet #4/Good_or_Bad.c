#include <stdio.h>
#include <string.h>

int main (){

//insert number of string
int n;
scanf("%d\n",&n);

//insert strings
char s[n][100001];
 for (int i=0;i<n;i++)
   {
     gets(s[i]);
   }
//counters
int bad_count=0;
//check strings
for (int i=0;i<n;i++)
  {
    for (int j=0;j<(strlen(s[i])-1);j++)
    {
        if (s[i][j]==s[i][j+1])
        {
          bad_count++;  
          continue;
        }
        else if (s[i][j]!=s[i][j+1])
          {
            if (s[i][j]==s[i][j+2])
              {
                bad_count=0;
                printf("Good\n");
                break;
              }
            else 
              {
                bad_count++;
                continue;
              } 


          }
   
    }
    if (bad_count!=0)
      printf("Bad\n");

   }

return 0;
}