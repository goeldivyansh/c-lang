#include<stdio.h>
#include<stdbool.h>
void main()
{
    int a[10],i,x,j=10;
    bool p = false;

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number x you have to search = ");
    scanf("%d",&x);

    int b=5;

    for(i=0;i<10;i++)
    {
     //   b=(i+j)/2;
        if(x==a[b])
        {
            p = true;
            break;
        }
        if(x>a[b])
        {
            b=(b+j)/2;
        }
        else
        {
            b=(i+b)/2;
        }
    }

    if(p==true)
    {
        printf("Present");
    }
    else
    {
        printf("Not Present");
    }
}

