#include <stdio.h>
#include <limits.h>
void ar(int *p, int n)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (p[i] > max)
        {
            max = p[i];
        }
         if (p[i] < min)
        {
            min = p[i];
        }
    }
    printf("%d %d",min,max);
}
int main()
{
    int x;
    scanf("%d",&x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&arr[i]);
    }
    ar(arr,x);

    return 0;
}