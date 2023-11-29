#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++)
  {
    scanf("%d",&arr[i]);
  }
  int x,ans=-1;
  scanf("%d",&x);
  for(int i=0;i<N;i++)
  {
     if(arr[i]==x)
     {
       ans=i;
       break;
     }
  }
  printf("%d",ans);
  return 0;
}