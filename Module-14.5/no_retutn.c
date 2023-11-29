#include<stdio.h>
void capital(char a)
{
    
    int f=a-32;
    printf("%c",f);
}

int main()
{
    int a;
    scanf("%c",&a);
    capital(a);
  
  return 0;
}