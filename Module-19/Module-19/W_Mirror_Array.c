#include<stdio.h>
void fun(int p[][],int n,int m,int i)
{
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
            printf("%d ",p[i][j]);
        }
      }
}
int main()
{
  int row,col;
  scanf("%d%d",&row,&col);
  int a[row][col];
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  fun(a,row,col);
  return 0;
}