#include<stdio.h>
int main()
{
   int i,sum=0;
   for(i=1;i<=10;i++)
   {
    
         if(i==5)
          {
           continue;
          }
         printf("%d \n",i);
   }

return 0;
}