#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int k = 1;
  int s = n - 1;
  for (int i = 0; i < (2 * n) - 1; i++)
  {

    for (int j = 0; j < s; j++)
    {
      printf(" ");
    }
    if (i % 2 == 1)
    {
      for (int j = 0; j < k; j++)
      {
        printf("-");
      }
    }
    else
    {
      for (int j = 0; j < k; j++)
      {
        printf("#");
      }
    }

    if (i < n - 1)
    {
      s--;
      k = k + 2;
    }
    else
    {
      s++;
      k = k - 2;
    }

    printf("\n");
  }

  return 0;
}