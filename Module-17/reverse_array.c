#include<stdio.h>
void fun(int *p,int n,int i)
{
    if(i==n) return;
    fun(p,n,i+1);
    printf("%d ",p[i]);
}
int main()
{
   int n;
   scanf("%d",&n);
   int ar[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&ar[i]);
   }
   fun(ar,n,0);
  return 0;
}