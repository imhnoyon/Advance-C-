#include<stdio.h>
int main()
{
  int n,sum=0,sum1=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++)
  {
    if(arr[i]>=0)
    {
       sum+=arr[i];
    }
     if(arr[i]<0)
     {
        sum1+=arr[i];
     }
  }
  printf("%d %d\n",sum,sum1);
  return 0;
}