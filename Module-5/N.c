#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    if(N==1)
    {
      printf("-1\n");
    }
    else
    {
        int i;
        for(i=1;i<=N;i++)
        {
            if (i%2==0)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
