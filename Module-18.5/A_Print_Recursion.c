#include<stdio.h>
void fun(int i,int n)
{
    if(i==n+1) return;
    printf("I love Recursion\n");
    fun(i+1,n);
}
int main()
{
  int n;
  scanf("%d",&n);
  fun(1,n);
  return 0;
}