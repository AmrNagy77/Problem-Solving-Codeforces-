#include <stdio.h>
int main(){

int t;
scanf("%d",&t);

int n,r=0;
char s[200001];

for (int i=0;i<t;i++)
   {
     scanf("%d\n",&n);
     gets(s);

      for (int k=2;k<=450;k++)
         {
            if ((k*k)==n)
            {
              r=k;  
              break;
            }
            else
              {
                continue;
              }  
         }
            if (r==0)
              {
                printf("NO\n");
                goto xx;
              } 

        int x=r+1;
      for (int f=0;f<(n-r-1);f++)
        {
                if (f==x)
                   {
                     int d=r-2;
                      while (d--)
                        {
                            if (s[f]=='0')
                            {
                              f++;  
                                continue;
                            } 
                            else 
                              {
                                printf("NO\n");
                                goto xxx;                               
                              }  
                        }
                        x+=2;
                   }
                else if (f!=x)
                  {
                    if (s[f]!='1'){
                      printf("NO\n");
                      goto xxxx;
                    }
                    else 
                      continue;
                  }    

        }

 for (int h=n-r-1;h<n;h++)
   {
    if (s[h]!='1')
       {
         printf("NO\n");
         goto xxxxx;       
       }
   }       
printf("YES\n");

xx:
xxx:
xxxx:
xxxxx:
 printf("");  
   }

return 0;
}