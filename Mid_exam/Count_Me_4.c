#include<stdio.h>
#include<string.h>
int main()
{
  char a[10001];
  fgets(a,10001,stdin);
  int cnt[26]={0};
  for(int i=0;i<strlen(a);i++)
  {
    int value=a[i]-'a';
    cnt[value]++;
  }
  for(int i=0;i<26;i++)
  {
     if(cnt[i] !=0)
     {
        printf("%c - %d\n",i+'a',cnt[i]);
        cnt[i]=0;
     }
  }
  return 0;
}