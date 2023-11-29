#include <stdio.h>
#include <string.h>
int fun(char *a,int i)
{
    if(a[i]=='\0') return 0;
    int cnt=fun(a,i+1);
    if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
    {
        return ++cnt;
    }
   else  if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
          return ++cnt;
        }
    
        else
        {
            return cnt;
        }
      
           
}
int main()
{
    char a[201];
    fgets(a, 201, stdin);
  int ans= fun(a,0);
    printf("%d",ans);

    return 0;
}