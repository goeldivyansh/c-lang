#include<stdio.h>
void main()
{
    int a,b,l,s,i;
    printf("Enter first number : ");
    scanf("%d",&a);

    printf("Enter second number : ");
    scanf("%d",&b);

    if(a>b)
    {
        s=b;
    }
    else
    {
        s=a;
    }

    printf("HCF is : ");
    for(i=s;i>0;i--)
    {
        if(a%i == 0 && b%i == 0)
        {
            printf("%d ",i);
            break;
        }
    }
}

