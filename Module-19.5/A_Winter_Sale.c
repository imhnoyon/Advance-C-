#include<stdio.h>
int main()
{
  float a,b;
  scanf("%f%f",&a,&b);
  float sum=((b*100)/(100-a));
  printf("%0.2f",sum);
  return 0;
}