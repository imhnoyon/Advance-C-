#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n-1;
    int k = 1;
    for (int i = 1; i<=(2*n); i++)
    {

        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
      if(i<n)
      {
           s--;
        k = k + 2;
      }     
      else if(i>n)
      {
           s++;
        k = k - 2;
      }
        printf("\n");
    }
    return 0;
}
