#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int i,a,even=0,odd=0,pos=0,neg=0;
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a); 
    if(a%2==0)
    {
      even++;
    }
    else
    {
      odd++;
    }
    if(a>0)
    {
      pos++;
    }
    else if(a<0)
    {
      neg++;
    }
  }
  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);
 

  return 0;
}