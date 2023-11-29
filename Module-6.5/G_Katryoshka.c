#include<stdio.h>
int main()
{
    long long int eye,mouth,body;
   scanf("%lld %lld %lld",&eye,&mouth,&body);
   int long long ans=0,min=0;
   if(eye<mouth && eye<body)
   {
       min=eye;

   }
   else if(mouth<eye && mouth <body)
   {
       min=mouth;
   }
   else
   {
       min=body;
   }
  eye=eye-min;
  mouth=mouth-min;
  body=body-min;
  ans=ans+min;
  eye=eye/2;
  if(eye<body)
  {
    ans=ans+eye;
  }
  else
  {
    ans=ans+body;
  }
printf("%lld\n",ans);





  return 0;
}
