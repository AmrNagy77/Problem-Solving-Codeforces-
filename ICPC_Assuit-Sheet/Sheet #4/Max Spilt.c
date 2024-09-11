#include <stdio.h>
#include <string.h>
int main (){

char s[1001];
for (int j=0;j<10;j++){
gets(s);

int len =strlen(s);

if (len>=8)
   {
     if (len%4==0)
       {
        printf("%d\n",len/4);
        for (int i=1;i<=len/4;i++)
           {
            printf("LLRR\n");
           }
       }
     
     else 
       {
          printf("%d\n",((len-6)/4)+1);
          for (int i=1;i<=((len-6)/4);i++)
            {
                printf("LLRR\n");
            }
          printf("LLLRRR");  
       }
       
   }

    else 
    {
        printf("%d\n",1);
        printf("%s",s);
    }

}
return 0;
}