#include <stdio.h>
int main()
{
    int k;
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int s, count = 0;
        scanf("%d", &s);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == s)
            {
                printf("YES\n");
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("NO\n");
        }
    }

    return 0;
}