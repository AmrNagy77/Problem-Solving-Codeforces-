#include <stdio.h>
#include <string.h>

int main(){

//insert number of tests 
int n;
scanf("%d\n",&n);

//insert strings
char strings [101][101];
  for (int i=0;i<n;i++)
    {
        gets(strings[i]);
    }

//check digits of strings & print it 
  for (int i=0;i<n;i++)
    {
      if (strlen(strings[i])<=10)
         {
            printf("%s\n",strings[i]);
         }   
      else if (strlen(strings[i])>10) 
         {
            printf("%c%d%c\n",strings[i][0],(strlen(strings[i])-2),strings[i][strlen(strings[i])-1]);
         }  

    }
return 0;
}