#include<stdio.h>
#include<limits.h>
int main()
{
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
    int n,m,ans,min=INT_MAX;
    scanf("%d%d%d",&n,&m,&ans);
    int s=(n*ans)/(n+m);
    printf("%d\n",(ans-s));
    
  }
  
  return 0;
}