#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    scanf("%s", &a);
    int len = strlen(a);
    int count = 0;
    int i = 0;
    int j = len-1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            printf("NO\n");
            count++;
            break;
        }
        i++;
        j--;
    }

    if (count == 0)
    {
        printf("YES\n");
    }

    return 0;
}