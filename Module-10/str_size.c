#include<stdio.h>
int main()
{
  char a[6];
  int cs=sizeof(a)/sizeof(char);
  printf("%d",cs);
  return 0;
}