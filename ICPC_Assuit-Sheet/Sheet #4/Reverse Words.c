#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){

char s[1000001];
gets(s);

int index=0;
for (int i=0;i<=strlen(s);i++)
   {
    if (s[i]==' '||s[i]=='\0')
      {
        for (int j=i-1;j>=index;j--)
           {
            printf("%c",s[j]);
           }
           if (s[i]!='\0')
           printf(" ");
           index=i+1;
      }
   }
   
return 0;
}