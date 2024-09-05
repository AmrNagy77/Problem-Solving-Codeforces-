#include <stdio.h>

int Game_wins(int x1,int x2,int y1,int y2)
{

int wins=0;
if (x1>y1&&x2>y2||x1>=y1&&x2>y2||x1>y1&&x2>=y2)
   wins+=2;
if (x1>y2&&x2>y1||x1>=y2&&x2>y1||x1>y2&&x2>=y1)
   wins+=2;
return wins;
}

int main(){

int t;
scanf("%d",&t);
int a1,b1,a2,b2;

for (int i=0; i<t; i++)
  {
    scanf("%d %d %d %d",&a1,&a2,&b1,&b2);

    printf("%d\n",Game_wins(a1,a2,b1,b2));
  }
return 0;
}