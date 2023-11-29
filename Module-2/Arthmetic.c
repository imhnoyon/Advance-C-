#include<stdio.h>
int main()
{
    int a,b,sum,sub,mlt,dvd;
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    mlt=a*b;
    dvd=a/b;

    printf("\nsummation is:: %d",sum);
    printf("\nsubtration is:: %d",sub);
    printf("\nmultification is:: %d",mlt);
    printf("\ndevtion is:: %d",dvd);
    return 0;
}