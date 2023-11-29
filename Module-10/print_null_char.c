#include<stdio.h>
int main()
{
  char a[]="Noyon";
  char cs=sizeof(a)/sizeof(char);
  printf("%d\n",cs);
  printf("%s",a);
  return 0;
}