#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  int flag=0;
  for(int i=0;i<n;i++)
  {
     scanf("%d",&arr[i]);
  }
  int x;
  scanf("%d",&x);
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]+arr[j]==x)
        {
            printf("yes\n");
            flag=1;
        }
    }
  }
  if(flag==0)
  {
    printf("No\n");
  }
  
  return 0;
}