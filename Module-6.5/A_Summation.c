#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  int arr[n];
  long long int sum=0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    sum=sum+arr[i]; 
  }
  if(sum<0)
  {
    sum *=-1;
    printf("%lld\n",sum);
  }
  else 
  {
    printf("%lld\n",sum);
  }
 


  return 0;
}