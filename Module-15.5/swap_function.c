#include<stdio.h>
void fun(int a,int b)
{
    int swap=a;
    a=b;
    b=swap;
    printf("%d %d",a,b);
}
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  fun(a,b);

  return 0;
}