#include<stdio.h>
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
  int x;
  int count=0;
  scanf("%d",&x);
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        if(a[i][j]==x)
        {
            count=1;
        }
    }
  }

if(count==1)
{
    printf("will not take number\n");
}
else
{
     printf("will take number");
}
  return 0;
}