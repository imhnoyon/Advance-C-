#include<stdio.h>
int main()
{
   int row,col;
  scanf("%d %d",&row,&col);
  int element=row*col;
  int a[row][col];
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  int flag=1;
  if(row!=col)
  {
    flag=0;
  }
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        if(i+j==row-1)
        {
            continue;
        }
        if(a[i][j] !=0)
        {
            flag=0;
        }
    }
  }
  if(flag==1)
  {
    printf("secondary diogonal matrix\n");
  }
  else
  {
    printf("Not primary diagonal\n");
  }
  return 0;
}