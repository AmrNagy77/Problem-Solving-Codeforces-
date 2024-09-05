#include <stdio.h>

int main(void){

int t;
scanf("%d",&t);
int n,k,a[100000];
while(t--)
   {
    int sum=0;
    int counter=0;
    scanf("%d %d",&n,&k);
      for (int j=0;j<k;j++)
        {
            scanf("%d",&a[j]);          
        }

        int max = a[0];
        int index=0;
        for (int j=0;j<k;j++)
          {
            if (a[j]>max)
             {
                max=a[j];
                index=j;
             }
          }

        for (int j=0;j<k;j++)
          {
            int temp=0;
            if (j!=index&&a[j]>=2)
              {
                temp=a[j];
                  while(temp>1)
                    {
                        temp--;
                        counter++;
                    }
              }

          }

             sum=counter+(n-max);   
            printf("%d\n",sum);
   }

return 0;
}