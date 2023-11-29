#include<stdio.h>
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
int main()
{
   int f=sum();
   printf("%d",f);
  return 0;
}