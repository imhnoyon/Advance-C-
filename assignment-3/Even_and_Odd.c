#include<stdio.h>
void odd_even() 
{
    int x;
    int even=0;
    int odd=0;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d",even,odd);
}
int main()
{
  odd_even();
  return 0;
}