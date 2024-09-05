#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
int temp,digits=0,sum=0;
char n[1000001],convert[1000000];
gets(n);

//convert a string to int
int c = atoi(n);
if (c<0)
 {
   c=c*-1;
 }
temp=c;
//count number of digits
while(temp!=0)
{
   temp/=10;
   digits++;
}
//insert digits into array 
for (int i=digits-1;i>=0;i--)
   {
      convert[i] = c%10;
      c/=10;
   }
//summition of digits
for (int i=0;i<digits;i++)
  {
   sum+=convert[i];
  }
//print sum of digits
printf("%d",sum);

return 0;
}