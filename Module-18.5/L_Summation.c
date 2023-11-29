#include<stdio.h>
long long int fun(int *p,int n,int i,long long sum)
{
    if(i==n) return sum;
   fun(p,n,i+1,sum+p[i]); 
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
  
 long long int sum= fun(a,n,0,0);
 printf("%lld",sum);
  return 0;
}