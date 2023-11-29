#include<stdio.h>
#include<string.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  for( i=0;i<n;i++)
  {
    char arr[101];
    scanf("%s",&arr);
    int len=strlen(arr);
    if(len<=10)
    {
        printf("%s\n",arr);
    }
    else 
    {
        printf("%c%d%c\n",arr[0],len-2,arr[len-1]);
    }
  }
 
  return 0;
}
