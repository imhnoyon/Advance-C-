#include<stdio.h>
#include<limits.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n],i;
  for( i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);

  }
  int max=INT_MIN;
  int maxpos=0;
  for( i=0;i<n;i++)
  {
    if(arr[i]>max)
    {
        max=arr[i];
        maxpos=i;
    }
  }
  int min=INT_MAX;
  int minpos=0;
  for(i=0;i<n;i++)
  {
    if(min>arr[i])
    {
        min=arr[i];
        minpos=i; 
    }
   
  }
  

    int temp=arr[maxpos];
    arr[maxpos]=arr[minpos];
    arr[minpos]=temp;

for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
  return 0;
}