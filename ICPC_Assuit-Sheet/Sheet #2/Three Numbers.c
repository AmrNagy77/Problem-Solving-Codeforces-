#include <stdio.h>
 
int main (){
 
int k,s;
scanf("%d %d",&k,&s);
 
int count=0;
 
for (int x=0;x<=s;x++)
   {
      for (int y=0;y<=s;y++)
         {
            for (int z=0;z<=s;z++)
               {
                if (x+y+z==s)
                  {
                    count++;
                    printf("%d %d %d\n ",x,y,z);
                  }
               }
 
         }  
 
   }  
printf("%d",count);
 
return 0;
}