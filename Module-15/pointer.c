#include<stdio.h>
int main()
{
  int x=10;
  int *p=&x;
  int *p1=p;
  *p1=500;
  printf("x er value: %d\n",x);
  printf("x er value: %d\n",*p1);
  return 0;
}