#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int p = (((n - 1) / 2) + 6);
  int s = p - 1;
  int k = 1;
  for (int i = 1; i <= p; i++)
  {
    for (int j = 1; j <= s; j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= k; j++)
    {
      printf("*");
    }
    if (i <= p - 1)
    {
      s--;
      k = k + 2;
      printf("\n");
    }
  }
  int sp = 5;
  printf("\n");
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= sp; j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= n; j++)
    {
      printf("*");
    }
    if (i % 2 == 0)
    {
      if (i >= p - 1)
      {
        k = n;
      }
    }
     if(i% 2==1)
    {
      if (i >= p - 1)
      {
        sp++;
        k = n;
      }
    }

    printf("\n");
  }

  return 0;
}