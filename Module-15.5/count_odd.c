#include<stdio.h>
void count_odd(int *p,int n)
{
   int count=0;
  for(int i=0;i<n;i++)
  {
    if(p[i]%2==1)
    {
        count++;
    }
  }
  printf("%d",count);
}
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  count_odd(arr,n);
  return 0;
}