#include <stdio.h>
int main (){

char s[1000001];
gets(s);


 int WordNumbers=0;

for (int i=0 ; i<strlen(s) ; i++)
    {
        if ((s[i]==' '||s[i]==','||s[i]=='?'||s[i]=='!')&&isalpha(s[i+1]))
          WordNumbers++;
    } 
if (s[0]==' ')
 WordNumbers-=1;
printf("%d",WordNumbers+1);

return 0;
}

