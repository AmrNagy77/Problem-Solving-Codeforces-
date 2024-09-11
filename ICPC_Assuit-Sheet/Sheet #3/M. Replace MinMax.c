#include <stdio.h>
int main (){

int n;
scanf("%d",&n);

int a[1000];
int Min_Index,Max_Index;
int max,min;
for (int i=0;i<n;i++)
  {
    //insert the array
    scanf(" %d",&a[i]);
      
      if (i==0) 
        {
        min=a[0]; 
        max=a[0];
        }
    //find the min number if array
    if (a[i]<min)
    {
    min=a[i];
    Min_Index=i;
    }

    //find the max number if array
    if (a[i]>max)
    {
    max=a[i];
    Max_Index=i;
    }

  }

int temp; 
//Replacement 
temp=a[Max_Index];
a[Max_Index]=a[Min_Index];
a[Min_Index]=temp;

for (int i=0;i<n;i++)
  {
    //Print the array after replacement 
    printf("%d ",a[i]);
  }

}