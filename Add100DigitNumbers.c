#include<stdio.h>
void main()
{
    int a[10],b[10],c[11],i;

    for(i=0;i<10;i++)
    {
        printf("Enter the %d digit of first number : " ,i+1);
        scanf("%d",&a[i]);
    }

    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("Enter the %d digit of second number : " ,i+1);
        scanf("%d",&b[i]);
    }

    printf("\n");
    printf("First number is : ");
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }

    printf("\nSecnd number is : ");
    for(i=0;i<10;i++)
    {
        printf("%d",b[i]);
    }

    for(i=0;i<11;i++)
    {
        c[i] = 0;
    }

    for(i=9;i>=0;i--)
    {
        c[i+1] = c[i+1] + a[i] + b[i];

        if(c[i+1]>9)
        {
            c[i+1] = c[i+1]%10;
            c[i] = c[i] + 1;
        }
    }

    printf("\nSum is : ");
    for(i=0;i<11;i++)
    {
        printf("%d",c[i]);
    }

}
