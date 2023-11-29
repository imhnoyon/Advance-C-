#include<stdio.h>
void World()
{
    printf("Hello World\n");
}
void Hello()
{
    printf("Hello\n");
    World();
}
int main()
{
    printf("Main start\n");
    Hello();
    printf("Main end\n");
  
  return 0;
}