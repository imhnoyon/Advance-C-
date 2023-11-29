#include<stdio.h>
int main()
{
 long long int a,b,c;
  scanf("%lld%lld%lld",&a,&b,&c);
  if(a%c==0 && b%c==0)
  {
     printf("Both\n");
  }
  else if(a%c==0)
  {
    printf("Memo\n");
  }
  else if(b%c==0)
  {
    printf("Momo\n");
  }
 else 
  {
     printf("No One\n");
  }

  return 0;
}