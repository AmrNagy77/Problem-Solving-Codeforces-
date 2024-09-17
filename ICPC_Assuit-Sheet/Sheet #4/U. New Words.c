#include <stdio.h>
#include <string.h>

int main (){

char s[1000001];
gets(s);

int e=0,g=0,y=0,p=0,t=0;
int counter=0;
  for (int i=0;i<strlen(s);i++)
     {
        if (s[i]=='e'||s[i]=='E')
          e++;
        else if (s[i]=='g'||s[i]=='G')
          g++;                                                 //EgYpTtg   //pemigdbeigyypetet
        else if (s[i]=='y'||s[i]=='Y')
          y++;          
        else if (s[i]=='p'||s[i]=='P')
          p++;
        else if (s[i]=='t'||s[i]=='T')
          t++;

      if(e>=1&&g>=1&&y>=1&&p>=1&&t>=1)
        {
            counter++;
            e--;
            g--;
            y--;
            p--;
            t--;
        } 
     }

     printf("%d",counter);

return 0;
}
