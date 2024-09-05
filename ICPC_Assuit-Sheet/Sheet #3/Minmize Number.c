#include <stdio.h>
int main(){

int n;
int nums[200];
int check=0;
int counter=0;


scanf("%d",&n);

    for (int i=0;i<n;i++)
        {
    scanf("%d",&nums[i]);
        }
    
    repeat : 
    for (int i=0;i<n;i++)
        {
           if (nums[i]%2!=0)
           check+=1;
        }
    
    if (check==0)
        {
            for (int i=0;i<n;i++)
                {
                   nums[i]/=2;
                }
           counter+=1;      
        goto repeat;
        }
    else 
       printf("%d",counter);
        
return 0;
}

