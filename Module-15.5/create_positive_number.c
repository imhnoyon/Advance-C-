#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        printf("%d",(n*-1));
    }
    else
    {
        printf("%d",n);
    }
  
  return 0;
}