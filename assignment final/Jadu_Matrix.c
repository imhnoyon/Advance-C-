#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
    if (row != col)
    {
        count++;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                if (a[i][j] != 1)
                {
                    count++;
                }
            }
          else  if(i==j)
            {
                if(a[i][j]!=1)
                {
                    count++;
                }
            }
         else if (a[i][j] != 0)
            {
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}