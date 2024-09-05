#include <stdio.h>
#include <string.h>

int main(){

char x[21] , y[21];
 gets(x);
 gets(y);

 strlwr(x);
 strlwr(y);

 int a=strlen(x);
 int b=strlen(y);
 int len,count=0;
  if(a<=b)
    len=a;
  else if (b<a)
     len=b;   

  for (int i=0;i<len;i++)
     {
      if (x[i]==y[i])
      {
         count+=1;
         continue;
      }   
      else if (x[i]<y[i])
        {     
         printf("%s",x);
         break;
        }
      else if (x[i]>y[i])      
        { 
         printf("%s",y);
         break;
        }
     }

     if (count==len)
       {
         if(a<=b)
            printf("%s",x);
         else if (b<a)
            printf("%s",y);           
       }

return 0;
}