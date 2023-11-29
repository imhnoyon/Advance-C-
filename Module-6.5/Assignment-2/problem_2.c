#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  if(n<0)
  {
 for(i=n;i<=0;i++)
    
    {
        if (n<0)
        {
            printf("%d ",i);
        }
    }
   
  }
  else if(n>0)
  {
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
  }
  else if(n==0)
  {
    
        printf("%d ",n);
    
  }

  return 0;
}