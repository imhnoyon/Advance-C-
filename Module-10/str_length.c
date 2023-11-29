#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  gets(a);
  int st=strlen(a);
  printf("%d",st);
  return 0;
}