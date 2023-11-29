#include<stdio.h>
int main()
{
  char ch;
  scanf("%c",& ch);

    if(ch =='z')
     {
         printf("a\n");



     }
     else if (ch=='Z')
     {
         printf("A\n");
     }

     else if(ch>='a' && ch<='z')
     {
         ch=ch+1;
         printf("%c\n",ch);
     }
     else
     {
         ch=ch+1;
         printf("%c\n",ch);
     }




  return 0;
}
