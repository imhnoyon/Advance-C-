#include<stdio.h>
int main()
{
  int a,b,sub;
  scanf("%d %d",&a,&b);
  sub=a-b;
  if (sub>=0)
  {
    printf("%d\n",sub);
  }
  else
  {
    printf("0\n");
  }

  return 0;
}