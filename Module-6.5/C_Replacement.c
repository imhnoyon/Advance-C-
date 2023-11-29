#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n],i;
  int value=2,value2=1;
  for( i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for( i=0;i<n;i++)
  {
    if(arr[i]<0)
    {
        arr[i]=value;
        printf("%d ",arr[i]);
    }
    else if(arr[i]==0)
    {
        arr[i];
        printf("%d ",arr[i]);
    }
    else if(arr[i]>0)
    {
        arr[i]=value2;
        printf("%d ",arr[i]);
    }
  }

  return 0;
}