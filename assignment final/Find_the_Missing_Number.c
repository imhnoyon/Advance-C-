#include<stdio.h>
int main()
{
 long long int n;
  scanf("%lld",&n);
  for(int i=0;i<n;i++)
  {
   long long int x,a,b,c;
    scanf("%lld%lld%lld%lld",&x,&a,&b,&c);
    long long int m=(a*b*c);
   long long  int d=x/m;
   long long int total=m*d;

    if(total==x)
    {
         printf("%lld",d);
    }
    else 
    {
        printf("-1");
    }
    printf("\n");
  }
   
  return 0;
}