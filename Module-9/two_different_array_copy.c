#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr1[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr1[i]);
  }
  int m;
  scanf("%d",&m);
  int arr2[m];
  for(int i=0;i<m;i++)
  {
    scanf("%d",&arr2[i]);
  }
  int ans[n+m];
  for(int i=0;i<n;i++)
  {
    ans[i]=arr1[i];
  }
  int i=n;
  for(int j=0;j<m;j++)
  {
    ans[i]=arr2[j];
    i++;
  }
  for(int i=0;i<n+m;i++)
  {
    printf("%d ",ans[i]);
  }
  return 0;
}