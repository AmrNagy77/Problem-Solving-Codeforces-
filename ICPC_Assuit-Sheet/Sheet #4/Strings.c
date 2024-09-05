#include <stdio.h>
#include <string.h>

int main (){

char a[11] , b[11] , s[11]  , z[11];

gets(a);
gets(b);

printf("%d %d\n",strlen(a),strlen(b));

 strcpy(s,a);
   strcpy(z,b);
     printf(strcat(s,z));
       printf("\n");

  char   x=a[0];
         a[0]=b[0];
         b[0]=x;

printf("%s %s",a,b);

return 0;
}
