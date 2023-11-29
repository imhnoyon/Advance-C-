#include<stdio.h>
#include<limits.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int count=0;
  int min=INT_MAX;
  for(int i=0;i<n;i++)
  {
     if(a[i]<min)
     {
        min=a[i];
     }
    
  }
  for(int i=0;i<n;i++)
  {
     if(min==a[i])
     {
        count++;
     }
  }
  if(count%2==0)
  {
    printf("Unlucky\n");
  }
  else
  {
    printf("Lucky\n");
  }
  return 0;
}