#include<stdio.h>
char capital()
{
    int a;
    scanf("%c",&a);
    int c=a-32;
    return c;
}
int main()
{
  int f=capital();
  printf("%c",f);

  return 0;
}