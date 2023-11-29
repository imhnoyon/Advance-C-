#include<stdio.h>
int main()
{
   long long int a,b,c,d;
  scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
  long long int s,x,k,m,n,v;
  s=a+b*c;
  x=a*b-c;
  k=a-b+c;
  m=a-b*c;
  n=a+b-c;
  v=a*b+c;
  if(s==d || x==d)
  {
    printf("YES\n");
  }
  else if(k==d || m == d)
  {
    printf("YES\n");
  }
  else if(n==d || v==d)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}