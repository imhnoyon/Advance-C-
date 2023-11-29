#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0, sum2 = 0;
    int flag = 1;
    if (N != N)
    {
        flag = 0;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];

            }
            if (i + j == N - 1)
            {
                sum2 = sum2 + a[i][j];
                continue;
            }
            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    int y = sum - sum2;
    if(y<0)
    {
      printf("%d", (y * -1));
    }
    else
    {
        printf("%d",y);
    }
    
    return 0;
}