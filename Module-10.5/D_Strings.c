#include<stdio.h>
#include<string.h>
int main()
{
  char a[11],b[11],new[202];
  scanf("%s %s",a,b);
  int len =strlen(a);
  int len2=strlen(b);
  
  printf("%d %d\n%s%s\n",len,len2,a,b);
 char swap=a[0];
  a[0]=b[0];
  b[0]=swap;
  printf("%s %s",a,b);

  return 0;
}