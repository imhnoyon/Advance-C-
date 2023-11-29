#include<stdio.h>
int mul(int x,int y)
{
    int mul=x*y;
    return mul;
}
int main()
{
   int x,y;
 int f= scanf("%d %d",&x,&y);
  printf("%d",mul(x,y));

  return 0;
}