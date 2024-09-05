#include <stdio.h>
#include <string.h>

int main(){

//insert string
char string[1001];
  gets(string);

int len = strlen(string);//lenght of string
int count = 0;


  for (int i=0,j=len-1 ;i<j ;i++,j--)
     {
       if (string[i]!=string[j])
         {
          printf("NO");
          return 0;
         }
     }
printf("YES");
return 0;
}
