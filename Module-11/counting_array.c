#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int count[6]={0};
  for(int i=0;i<n;i++)
  {
    count[arr[i]]++;

  }
  for(int i=0;i<3;i++)
  {
    printf("%d - %d\n",i,count[i]);
  }
  return 0;
}