#include<stdio.h>
void main()
{
    int a=8,b=20,c=8;

    if(a>b&&a>c)
    {
        printf("\n%d",a);
    }

    if(b>a&&b>c)
    {
        printf("\n%d",b);
    }

    if(c>b&&c>a)
    {
        printf("\n%d",c);
    }
}
