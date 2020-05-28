#include<stdio.h>
void main()
{
    float i,e,p,n = 1;

    scanf("%f",&e);
    scanf("%f",&p);

    for(i=1;i<=p;i++)
    {

       n=n*e;
       printf("\n%f",n);
    }
    // n=e;
    // printf("%d",n);
}
