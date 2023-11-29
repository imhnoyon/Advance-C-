#include <stdio.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        int n;
        scanf("%d", &n);
        char a[100001];
        int count = 0;
        int count2 = 0;
        scanf("%s", a);
        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i] == 'T')
            {
                count++;
            }
            else
            {
                count2++;
            }
        }
        if (count < count2)
        {
            printf("Pathaan\n");
        }
        else if (count > count2)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}