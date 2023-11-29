#include<stdio.h>
void fun(char *arr)
{
  arr[0]='O';
}
int main()
{
  char arr[]="Noyon";
  fun(arr);
  printf("%s",arr);
 
  return 0;
}