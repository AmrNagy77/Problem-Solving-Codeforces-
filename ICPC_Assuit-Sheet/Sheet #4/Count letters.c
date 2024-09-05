#include <stdio.h>
#include <string.h>

int  main(){

//define a string & get it 
 char s[10000001];
gets(s);


//Sorting the String
 
    
  int n = strlen(s);

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (s[j] > s[j+1]) {
                int temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for (int i=0;i<n;i++)
       {
          if (i>0&&s[i]==s[i-1])
            continue;
               int count=0;
           for (int j=0;j<n;j++)
              {                
                if (s[i]==s[j])
                  count++;
              }
                  printf("%c : %d\n",s[i],count);
       }
return 0;
}