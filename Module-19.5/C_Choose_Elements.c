#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }
    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if(a[i]>0)
        {
           sum = sum + a[i];
        }
       
    }
    printf("%lld", sum);
    return 0;
}