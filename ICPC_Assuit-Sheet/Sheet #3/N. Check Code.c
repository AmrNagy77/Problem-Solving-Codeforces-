#include <stdio.h>
#include <string.h>

int main() {

int a,b;
scanf("%d %d\n",&a,&b);

int range=a+b+1;

char s[range+1];
gets(s);

int y=0 ,n=0;

for (int i=0;i<range;i++)
   {
      if ((s[i]=='-')&&(i==a))
        n=1;

      else if ((s[i]=='-')&&(i==a)) 
       {
        printf("No");
        return 0;
       } 

      else if (s[i]>='0'&&s[i]<='9')  
        y++;

   }

if (y==range-1&&n==1)
  printf("Yes");
else
  printf("No");  

return 0;
}