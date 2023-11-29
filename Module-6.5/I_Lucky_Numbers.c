#include<stdio.h>
int main()
{
  int a;
  scanf("%d %d",&a);
    int x,y;
    x=a%10; // 4
    y=a/10; //6
    if( (x!=0 && y%x==0) || (y!=0 && x%y==0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    
  return 0;
}
