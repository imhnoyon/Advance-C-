#include<stdio.h>
#include<string.h>
int main()
{
  char a[1001] ,b[1001];
   scanf("%s %s",a,b);
   
   int st=strlen(a);
   int rm=strlen(b);
   printf("%d %d\n%s %s",st,rm,a,b);
  return 0;
}