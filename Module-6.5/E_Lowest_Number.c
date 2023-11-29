#include<stdio.h>
#include<limits.h>
int main()
{
  int n,i,min=INT_MAX,pos=0;
  scanf("%d",&n);
  int arr[n];
  for( i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for( i=0;i<n;i++)
  {
    if(min>arr[i])
    {
        min=arr[i];
        pos=i+1;
    }
  }
  printf("%d %d\n",min,pos);
  return 0;
}