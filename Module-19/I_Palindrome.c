#include<stdio.h>
#include<string.h>
int main()
{
  char a[1001];
  scanf("%s",a);
  int i=0;
  int j=strlen(a)-1;
  int flag=1;
  while(i<j)
  {
     if(a[i]!=a[j])
     {
        printf("NO\n");
        flag=0;
        break;
     }
    i++;
    j--;
  }
  if(flag==1)
  {
    printf("YES\n");
  }
  return 0;
}