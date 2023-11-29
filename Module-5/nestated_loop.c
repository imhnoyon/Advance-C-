#include<stdio.h>
int main()
{
  int i;
  for(i=1;i<=3;i++)
  {
    int j;
    for(j=1;j<=5;j++)
    {
        printf("*",j);
    }
    printf("\n");
  }
  return 0;
}