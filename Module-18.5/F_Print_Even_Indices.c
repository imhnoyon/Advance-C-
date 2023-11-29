#include<stdio.h>
void fun(int *p,int n,int i )
{
    if(i==n) return;
    fun(p,n,i+1);
    if(i%2==0)
    {
       printf("%d ",p[i]);
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
  fun(a,n,0);
  return 0;
}