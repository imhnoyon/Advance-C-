#include<stdio.h>
int main()
{
  int x,max=0,a;
  scanf("%d",&x);
  for(int i=1;i<=x;i++)
  {
    scanf("%d",&a);
      if(a>max)
      {
        max=a;
      }
      
  }
  printf("%d\n",max);
  return 0;
}