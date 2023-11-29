#include<stdio.h>
#include<limits.h>
int fun(int *p,int n,int i)
{
    if(i==n)
    {
        return INT_MIN;
    }
   int ans= fun(p,n,i+1);
   if(p[i]>ans)
   {
     return p[i];
   }
   else
   {
     return ans;
   }
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
 int max= fun(a,n,0);
  printf("%d",max);
  return 0;
}