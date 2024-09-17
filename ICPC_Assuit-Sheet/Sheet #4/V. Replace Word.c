#include <stdio.h>
#include <string.h>

int main (){

char s[1001];
gets(s);

for (int i=0;i<strlen(s);i++)
   {
    if (s[i]=='E'&&s[i+1]=='G'&&s[i+2]=='Y'&&s[i+3]=='P'&&s[i+4]=='T')             
       {
        printf(" ");
        i=i+4;
       }
    else 
      printf("%c",s[i]);

   }

return 0;
}