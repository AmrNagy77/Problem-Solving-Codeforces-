#include <stdio.h>
#include <string.h>

int main(){

//insert a string
char string[100001];
 gets(string);

//
for (int i=0;i<strlen(string);i++)
  {
    if (string[i]==',')
      printf(" ");
    else
     {
        if (isupper(string[i]))
          printf("%c",tolower(string[i]));
        else if (islower(string[i]))
          printf("%c",toupper(string[i]));
     }  
  }

return 0;
}