#include <stdio.h>
#include <string.h>

int main(){

char s[1001],t[1001];

    gets(s);
     gets(t);

        printf("%d %d\n",strlen(s),strlen(t));
          strcat(s," ");
             printf("%s",strcat(s,t));
}