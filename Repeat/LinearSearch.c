 #include<stdio.h>
#include<stdbool.h>
void main()
{
    int a[5],i,x,j=0;
    bool p = false;

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number x you have to search = ");
    scanf("%d",&x);

    for(i=0;i<5;i++)
    {
        if(x==a[i])
        {
            p = true;
            printf("It is present");
            break;
        }
        else
        {
            p = false;
        }
    }

    if(p==false)
    {
        printf("Not Present");
    }
}
