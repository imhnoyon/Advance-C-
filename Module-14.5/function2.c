#include <stdio.h>
char small_to_capital (char a)//parametter
{
    
      int c= a+32;
    
   
   return c;
}
int main()
{
  char x;
  scanf("%c", &x);
  int f = small_to_capital(x);//argument
  printf("%c", f);
  return 0;
}