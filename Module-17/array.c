#include<stdio.h>
void fun(int *p,int n,int i)
{
    if(i==n) return;
  printf("%d ",p[i]);
   fun(p,n,i+1);
  
}
int main()
{
  int x;
  scanf("%d",&x);
  int ar[x];
  for(int i=0;i<x;i++)
  {
    scanf("%d",&ar[i]);
  }
  fun(ar,x,0);
  return 0;
}