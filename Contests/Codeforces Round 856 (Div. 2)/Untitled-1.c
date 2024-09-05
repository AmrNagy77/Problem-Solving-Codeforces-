#include <stdio.h>
#include <string.h>
int main (){

int t;
scanf("%d",&t);

int len[t];
char sub_s[40][20];
char final_s[t][20];
char ss_s[2][10];
char temp[20][20];
char temp2[20][20];
char c[5][5];
cont :
for (int i=0;i<t;i++)
   {
       scanf("%d",&len[i]);
         for (int p=0;p<(2*len[i]-2);p++)
            {
              scanf("%s",&sub_s[p]);
                
            }
          for (int j=0;j<(2*len[i]-2);j++)  
            {
                if (strlen(sub_s[j])==len[i]/2)
                  {
                    int x=0;
                    strcpy(ss_s[x],sub_s[j]);
                    x++;
                  }
                
                  if (strlen(sub_s[j])==1)
                  {
                    int f=0;
                    strcpy(c[f],sub_s[j]);
                    f++;   
                  }

                     
                     strcpy(temp[0],ss_s[0]);
                     strcat(ss_s[1],temp[0]);
                     strcpy(temp2[0],ss_s[1]);
                     strcat(ss_s[0],temp2[0]);

                        
                        
  if ((ss_s[0][0]==c[0][0]||ss_s[0][0]==c[1][0])&&(ss_s[0][len[i]-1]==c[0][0]||ss_s[0][len[i]-1]==c[1][0]))
         strcpy(final_s[i],ss_s[0]);
  else if ((ss_s[1][0]==c[0][0]||ss_s[1][0]==c[1][0])&&(ss_s[1][len[i]-1]==c[0][0]||ss_s[1][len[i]-1]==c[1][0]))
         strcpy(final_s[i],ss_s[1]);



  for (int l=0,k=(len[i]-1) ;l<k ;l++,k--)
     {
       if (final_s[i][l]!=final_s[i][k])
         {
          printf("NO\n");
          goto cont;
         }
     }
printf("YES\n");

            }

   }

return 0;
}