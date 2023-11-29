#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    int s;
    scanf("%d",&s);
    for(int i=1;i<=s;i++)
    {
        printf("%d ",i);
       
    }
    printf("\n");
  }
  return 0;
}