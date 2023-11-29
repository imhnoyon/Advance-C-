#include<stdio.h>
int main()
{
    char ch;
    int ans;
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z')
    {
      ans=ch-32;
      printf("%c",ans);
    }
    else
    {
        ans=ch+32;
        printf("%c",ans);
    }
    return 0;
}