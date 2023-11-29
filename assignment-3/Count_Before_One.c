#include<stdio.h>
int count_before_one(int *p,int n)
{
    int count=0;
   for(int i=0;i<n;i++)
   {
    if(p[i]!=1)
    {
        count++;
        
    }
    if(p[i]==1)
    {
        break;
    }
   }
   return count;
}
int main()
{
  int x;
  scanf("%d",&x);
  int arr[x];
  for(int i=0;i<x;i++)
  {
    scanf("%d",&arr[i]);
  }
  int f=count_before_one(arr,x);
  printf("%d",f);
  return 0;
}