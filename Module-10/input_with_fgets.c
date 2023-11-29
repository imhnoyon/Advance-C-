#include<stdio.h>
int main()
{
  char a[21];
  fgets(a,20,stdin);
  printf("%s",a);
  return 0;
}