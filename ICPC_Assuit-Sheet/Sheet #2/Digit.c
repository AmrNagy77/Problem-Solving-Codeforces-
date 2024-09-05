#include <stdio.h>
#include <string.h>

int main (){

int n;
scanf("%d\n",&n);

char arr[n][10];
for (int i=0;i<n;i++)
   {
     gets(arr[i]);
   }

char digits[10];
for (int i=0;i<n;i++)
   {        
        for (int j=strlen(arr[i])-1;j>=0;j--)
           {
              printf("%c ",arr[i][j]);
           } 

           printf("\n");  

   }

return 0;
}