#include <stdio.h>
#include <string.h>

int main(){

char s[1000001];
 gets(s);

char x[]={'\\'};
  for (int i=0;i<(strlen(s)-1);i++)
     {
        if (s[i]==x[0])
           {
            break;
           }
        else 
          printf("%c",s[i]);   
     }

return 0;
}