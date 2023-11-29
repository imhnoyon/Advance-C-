#include <stdio.h>
int aski(char a)//parametter
{

  return a;
}
int main()
{
  char x;
  scanf("%c", &x);
  int f = aski(x);//argument
  printf("%d", f);
  return 0;
}