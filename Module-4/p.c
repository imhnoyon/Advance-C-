#include<stdio.h>
int main()
{
    int x,digit;
    scanf("%d",&x);
    digit=x/1000;
    if(digit %2 ==0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}