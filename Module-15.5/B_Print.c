#include <stdio.h>
int x;
void ar()
{
    for (int i = 1; i < x; i++)
    {
        printf("%d ", i);
    }
    printf("%d",x);
}
int main()
{
    scanf("%d", &x);

    ar();
    return 0;
}