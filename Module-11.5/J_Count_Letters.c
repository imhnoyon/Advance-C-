#include <stdio.h>
#include <string.h>
int main()
{
    char a;
    int cnt[26] = {0};
    while (scanf("%c",&a)!=EOF)
    {
        int val = (a - 'a');
         cnt[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c : %d\n", (i + 'a'), cnt[i]);
            cnt[i]=0;
        }
    }
    return 0;
}