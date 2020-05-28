#include<stdio.h>
void main()
{
    int i=1,e,p,n=1;
    scanf("%d\n%d",&e,&p);
    while(i<=p)
       {
        n=n*e;
        i++;
       }
printf("%d",n);
}
