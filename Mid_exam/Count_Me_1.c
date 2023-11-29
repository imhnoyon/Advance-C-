#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  int count=0,count1=0;
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
    {
          count++;
    }
  else  if(arr[i]%3==0)
    {
        count1++;
    }
    else if(arr[i]%2==0 && arr[i]%3==0)
    {
        count++;
    }
  }
  printf("%d %d",count,count1);

  return 0;
}