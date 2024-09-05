#include <stdio.h>
#include <string.h>
 
int main(){

int n;
scanf("%d\n",&n);

//define a string & get it 
char s[10000001];
gets(s);


//Sorting the String
    for (int i = 0; i < n-1; i++) 
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (s[j] > s[j+1]) 
            {
                int temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    printf("%s",s);

return 0;
}