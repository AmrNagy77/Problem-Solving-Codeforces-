#include<stdio.h>
#include<string.h>

int main(){

int sum=0;
char n[1000001];
gets(n);

//summition of digits
for (int i=0;i<strlen(n);i++)
  {
   sum+=(n[i]-'0');
  }
//print sum of digits
printf("%d",sum);

return 0;
}