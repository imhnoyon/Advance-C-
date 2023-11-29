#include<stdio.h>
void fun(int i)
{
    if(i==0) return;
     if(i==1)
    {
       printf("1");
       return;
    }
    printf("%d ",i);
    fun(i-1);
    
    
    
}
int main()
{
  int n;
  scanf("%d",&n);
  fun(n);
  return 0;
}