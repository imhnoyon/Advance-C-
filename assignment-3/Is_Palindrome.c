#include <stdio.h>
#include <string.h>
int is_palindrome(char p[])
{
    int i = 0;
    int j = strlen(p) - 1;
    while (i <= j)
    {
        if (p[i] != p[j])
        {
            
            return 0;
        }
      
        i++;
        j--;
    }
    if(1==1)
    {
        return 1;
    }
   
}

int main()
{
    char a[1001];
    scanf("%s", a);
    int f = is_palindrome(a);
    if (f == 1)
    {
        printf("Palindrome");
    }
    if (f == 0)
    {

        printf("Not Palindrome");
    }
    return 0;
}