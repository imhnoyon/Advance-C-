#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d\n",&arr[i]);
  }
  int x,v;
  scanf("%d %d",&x,&v);
  for(int i=n-1;i>=x;i--)
  {
    arr[i]=arr[i];
     arr[x]=v;
  }
  arr[x]=v;
  for(int i=n-1;i>=0;i--)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}