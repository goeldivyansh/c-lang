#include<stdio.h>
void main()
{
    int a,b,l,i;
    printf("Enter first number : ");
    scanf("%d",&a);

    printf("Enter second number : ");
    scanf("%d",&b);

    if(a>b)
    {
        l=a;
    }
    else
    {
        l=b;
    }

    for(i=l;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            break;
        }
    }
    printf("LCM is : %d",i);
}
